#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
    char data;
    struct node* next;
};

void append(struct node** head,char data){
    struct
}


int main(){
    struct Node*head=NULL;
    char input[100];

    printf("Enter a string: ");
    scanf("%s",input);

    for(int i=0;input[i]!='\0';i++){
        append(&head,input[i]);
    }
    printf("Linked List: ");
    display(head);
    return 0;
}