#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define a structure for the linked list node
typedef struct Node {
    char *data;
    struct Node *next;
} Node;

// Function to create a new node
Node* createNode(char *data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = strdup(data); // Allocate memory and copy the string
    newNode->next = NULL;
    return newNode;
}

// Function to concatenate two strings
char* concatenateStrings(char *str1, char *str2) {
    int length = strlen(str1) + strlen(str2) + 1; // +1 for the null terminator
    char *result = (char *)malloc(length * sizeof(char));
    strcpy(result, str1);
    strcat(result, str2);
    return result;
}

// Function to print the linked list
void printList(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("->%s-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// // Function to free the linked list
// void freeList(Node *head) {
//     Node *current = head;
//     while (current != NULL) {
//         Node *temp = current;
//         current = current->next;
//         free(temp->data); // Free the string memory
//         free(temp);
//     }
// }

int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%99s", str1);
    printf("Enter the second string: ");
    scanf("%99s", str2);

    // Concatenate the strings
    char *concatenated = concatenateStrings(str1, str2);

    // Create the linked list and store the concatenated string
    Node *head = createNode(concatenated);

    // Print the linked list
    printf("Linked list containing the concatenated string:\n");
    printList(head);

    // Free allocated memory
    //free(concatenated);
    //freeList(head);

    return 0;
}
