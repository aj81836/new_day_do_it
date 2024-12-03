#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="abhijit";
    char str2[]="jadhav";

    int res=strcmp(str1,str2);
    if (res==0)
    {
        printf("string is equal");
    }else
        printf("string is unequal");

    printf("\n show the value:%d",res);
    return 0;
    
}