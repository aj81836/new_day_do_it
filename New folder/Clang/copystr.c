#include<stdio.h>
#include<string.h>

int main(){
    char s1[10]="abhijit";
    char s2[10];

    memcpy(s2,s1,strlen(s1));
    printf("%s",s2);
    return 0;
}