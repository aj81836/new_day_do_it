#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for a node
struct node {
    int data;
    struct node *next;
};

// Function to print the linked list
void linklistprint(struct node *ptr) {
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

// Function to add a new node at the end of the linked list
struct node* addNode(struct node *head, int value) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) { // If list is empty
        return newNode;
    }

    while (temp->next != NULL) { // Traverse to the end of the list
        temp = temp->next;
    }
    temp->next = newNode;

    return head;
}

int main() {
    struct node *head = NULL; // Initialize the head pointer to NULL
    int choice, value;

    printf("Linked List User Input\n");

    // Loop to allow user to add data to the linked list
    do {
        printf("\nEnter a value to add to the linked list: ");
        scanf("%d", &value);

        head = addNode(head, value);

        printf("Do you want to add another node? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice != 0);

    printf("\nThe linked list is: ");
    linklistprint(head);

    return 0;
}
