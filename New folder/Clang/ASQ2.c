#include<stdio.h>
 

int main(){
    
    char num;

    printf("Enter the number:");
    scanf("%c",&num);

    printf("character=%c\n",num);
    printf("decimal=%d\n",num);
    printf("octal=%o\n",num);
    printf("hex=%x\n",num);
    return 0;
}
