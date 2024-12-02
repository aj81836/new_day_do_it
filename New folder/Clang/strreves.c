#include<stdio.h>
#include<string.h>

void revers(char* str,int first,int last){
    if (first>=last)
    {
        return;
    }
    char temp=str[first];
    str[first]=str[last];
    str[last]=temp;
    revers(str,first+1,last-1);
    
}

int main(){
    char str[10]="abhijit";
    revers(str,0,strlen(str)-1);
    printf("%s",str);
    return 0;
}