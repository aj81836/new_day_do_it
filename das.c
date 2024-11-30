#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 32

typedef struct stack {
    char arr[SIZE][50]; // Stack array to hold strings (book names)
    int top;            // Top pointer
} stack;

void init_stack(stack *ps);
void push(stack *ps, char book[]);
void pop(stack *ps);
char* peek(stack *ps);
int stack_full(stack *ps);
int stack_empty(stack *ps);
void display(stack *ps);
void save_to_file(stack *ps);

int main() {
    stack s;
    init_stack(&s);
    int choice;

    do {
        printf("\n0. Exit\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Save to File\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                exit(0);

            case 1: // Push
                if (stack_full(&s)) {
                    printf("Stack is Full!\n");
                } else {
                    char book[50];
                    printf("Enter the book name to push on the stack: ");
                    scanf(" %[^\n]", book); // To accept string with spaces
                    push(&s, book);
                    printf("Book Pushed: %s\n", book);
                }
                break;

            case 2: // Pop
                if (stack_empty(&s)) {
                    printf("Stack is Empty!\n");
                } else {
                    printf("Book Popped: %s\n", peek(&s));
                    pop(&s);
                }
                break;

            case 3: // Peek
                if (stack_empty(&s)) {
                    printf("Stack is Empty! Peek not possible!\n");
                } else {
                    printf("Top Book: %s\n", peek(&s));
                }
                break;

            case 4: // Display
                if (stack_empty(&s)) {
                    printf("Stack is Empty!\n");
                } else {
                    printf("Books in Stack:\n");
                    display(&s);
                }
                break;

            case 5: // Save to File
                save_to_file(&s);
                break;

            default:
                printf("Enter a valid choice!\n");
        }
    } while (choice != 0);

    return 0;
}

void init_stack(stack *ps) {
    ps->top = -1; // Initialize the top to -1 indicating the stack is empty
}

void push(stack *ps, char book[]) {
    strcpy(ps->arr[++(ps->top)], book); // Increment top and push the book (as string)
}

void pop(stack *ps) {
    ps->top--; // Decrement the top to remove the book
}

char* peek(stack *ps) {
    return ps->arr[ps->top]; // Return the top book
}

int stack_full(stack *ps) {
    return (ps->top == SIZE - 1); // Check if the stack is full
}

int stack_empty(stack *ps) {
    return (ps->top == -1); // Check if the stack is empty
}

void display(stack *ps) {
    for (int i = ps->top; i >= 0; i--) {
        printf("%d. %s\n", i + 1, ps->arr[i]);
    }
}

void save_to_file(stack *ps) {
    FILE *fptr;
    fptr = fopen("stack_books.txt", "w");
    if (fptr == NULL) {
        printf("Error in creating file!\n");
        return;
    }

    fprintf(fptr, "Books in Stack:\n");
    for (int i = ps->top; i >= 0; i--) {
        fprintf(fptr, "%d. %s\n", i + 1, ps->arr[i]);
    }

    fclose(fptr);
    printf("Stack contents saved to 'stack_books.txt' successfully.\n");
}
