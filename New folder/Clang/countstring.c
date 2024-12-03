/*
#include<stdio.h>
#include<string.h>

int main(){
    char str[]="abhijit";
    int length=strlen(str);

    printf("%d",length);

}
*/

#include<stdio.h>
#include<string.h>

int stringlen(char* str){
    int length=0;
    while (str!='\0')
    {
        length++;
        str++;
    }
    return length;
    
}

int main(){
    char str[]="abhijit";

    int length=stringlen(str);
    printf("%d",length);
    return 0;
}