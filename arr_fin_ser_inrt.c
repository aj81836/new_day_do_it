#include<stdio.h>

#define MAX 20

int main (){
    int arr[MAX];
    int n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);

    printf("enter %d element:\n",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {
        printf("\n Menu:\n");
        printf("1.Traverse:\n");
        printf("2.Search:\n");
    } 
    
}