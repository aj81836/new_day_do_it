#include<stdio.h>
#define MAX 5

void insert(int*,int pos,int num);
void del(int*,int pos);
void display(int*);
//void search(int*,int num);

int main()
{
    int arr[5];
    insert(arr,1,11);
    insert(arr,2,12);
    insert(arr,3,13);
    insert(arr,4,14);
    insert(arr,5,15);
    printf("Show the array elements:\n");
    display(arr);
    del(arr,5);
    del(arr,2);
    printf("after deletion:\n");
    display(arr);


    return 0;
}
void del(int *arr,int pos)
{
    int i;
    for(i=pos;i<MAX;i++)
    arr[i-1]=arr[i];
    arr[i-1]=0;
}
void insert(int*arr,int pos,int num)
{
    int i;
    for(i=MAX-1;i>=pos;i--)
    arr[i]=arr[i-1];
    arr[i]=num;
}
void display(int *arr)
{
    int i;
    for (i = 0; i < MAX; i++)
    printf("%d\t",arr[i]);
    printf("\n");
    
}