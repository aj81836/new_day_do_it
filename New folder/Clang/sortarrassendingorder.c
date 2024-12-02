#include<stdio.h>
#include<stdlib.h>

int comp(const void*a,const void*b){
    return(*(int*)a-*(int*)b);
}

int main(){
    int arr[6]={};
    printf("Enter array elemet:\n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d,",&arr[i]);
    }
    
    int n=sizeof(arr)/sizeof(arr[0]);

    qsort(arr,n,sizeof(int),comp);
    for (int i = 0; i < n; i++)
    {
        printf("%d,",arr[i]);
    }
    
}