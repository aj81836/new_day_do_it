#include<stdio.h>
long factorial(int);

int main()
{
    int num;
    long fact;

    printf("enter the number:\n");
    scanf("%d",&num);

    fact=factorial(num);
    printf("factorial:%ld\n",fact);
    return 0;

}
long factorial(int a)
{
    int s;
    if(a==0)
     return 1;
     else
     s=a*factorial(a-1);
    return s;
}