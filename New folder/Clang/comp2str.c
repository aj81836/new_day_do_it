#include<stdio.h>
#include<string.h>

int main(){
    char str1[]="abhijit";
    char str2[]="abhijit";

    int rsd=strcmp(str1,str2);
    if(rsd==0){
        printf("\nstring are equal:\n");
    }else{
        printf("\nstring are unequal:\n");
    }
    printf("%d",rsd);

}