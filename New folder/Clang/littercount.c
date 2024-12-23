#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char str[100];
    int count[256]={0};

    printf("Enter the string:\n");
    scanf("%s",str);

    for (int i = 0; i < str[i]!='\0'; i++)
    {
        if (isalpha(str[i]))
        {
            count[tolower(str[i])]++;
        }
        
    }
    printf("Count of string:\n");
    for (int i = 0; i < 256; i++)
    {
        if (count[i]>0 && isalpha(i))
        {
            printf("%c: %d\n",i,count[i]);
        }
        
    }
    
    
}