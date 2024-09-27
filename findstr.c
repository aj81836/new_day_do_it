#include<stdio.h>
#include<string.h>

int main(){
    char str[20],search[10];
    
    printf("Enter the string:\n");
    scanf("%[^\n]%*c",str);
    printf("Enter the search string:\n");
    scanf("%[^\n]%*c",search);
    
    if(strstr(str,search)!=NULL)
    {
        printf("string found");
    }else{
        printf("not found");
    }
    return 0;
}