#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;
void insert(int x){
    struct node *temp=(struct node*)malloc(sizeof (struct node));
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print(){
    struct node *temp=head;
    printf("list is:");
    while(temp!=NULL){
        printf("%d-> ",temp->data);
        temp=temp->next;

    }
}

int main(){
   int head=NULL;
    int n,i,x;
    printf("How many node you want to create:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number:");
        scanf("%d",&x);
        insert(x);
        print();
    }
}




