#include<stdio.h>
#include<string.h>

void revers(char* str){
    char temp[10];
    int t_size=-1;
    int len=strlen(str);

    for (int  i = 0; i < len; i++)
    {
        temp[++t_size]=str[i];
    }

   for (int i = 0; i < len; i++)
   {
    str[i]=temp[t_size--];
   }
    
}

int main(){
    char str[10]="abhijit";
    revers(str);
    printf("%s",str);
    return 0;
}