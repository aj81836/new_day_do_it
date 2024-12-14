#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for linked list nodes
typedef struct Node {
    char data;
    struct Node* next;
} Node;

// Function to create a new node
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to append a character to the linked list
void append(Node** head, char data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to count the total number of nodes in the linked list
int countNodes(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%c -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int main() {
    char str1[21], str2[21];
    Node* head = NULL;

    // Input two strings
    printf("Enter the first string (max 20 characters): ");
    fgets(str1, 21, stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove the newline character if present

    printf("Enter the second string (max 20 characters): ");
    fgets(str2, 21, stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove the newline character if present

    // Store each character of the strings in the linked list
    for (int i = 0; i < strlen(str1); i++) {
        append(&head, str1[i]);
    }
    for (int i = 0; i < strlen(str2); i++) {
        append(&head, str2[i]);
    }

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    // Count and display the total number of characters
    int totalCharacters = countNodes(head);
    printf("Total number of characters in the linked list: %d\n", totalCharacters);
    
    return 0;
}
