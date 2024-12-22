#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the node structure
struct Node {
    char data[100];
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(char* data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, data);
    newNode->next = NULL;
    return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%s -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node* head = createNode("Hello");
    head->next = createNode("World");
    head->next->next = createNode("This");
    head->next->next->next = createNode("is");
    head->next->next->next->next = createNode("a");
    head->next->next->next->next->next = createNode("Linked");
    head->next->next->next->next->next->next = createNode("List");

    // Print the linked list
    printList(head);

    return 0;
}