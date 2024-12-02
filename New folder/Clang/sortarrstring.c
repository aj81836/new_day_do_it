#include<stdio.h>
#include<string.h>
#include<stdlib.h>

static int mycompar(const void *a,const void *b){
    return strcmp(*(const char**)a,*(const char**)b);
}

void sort(const char* arr,int n){
    qsort(arr,n,sizeof(const char*),mycompar);
}

int main(){
    const char* arr[]={"XYZ","ABC","PQR"};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("giver arr is:\t");
    for (int i = 0; i < n; i++)
    {
        printf("%d:%s",i,arr[i]);
    }
    sort(arr,n);
 printf("\nsorted array is:\t");
 for (int i = 0; i < n; i++)
 {
    printf("%d:%s",i,arr[i]);
 }
    
    
}