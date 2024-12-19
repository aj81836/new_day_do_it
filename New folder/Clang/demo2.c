#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};  
    //int *p = NULL;               
    //int **ptr = &p;               
    
    int *ptr = arr;
    printf("%d",*(ptr+3));
    //printf("Value of p: %p\n", (void *)p);
    //printf("First element of arr via p: %d\n", *p);

    return 0;
}
