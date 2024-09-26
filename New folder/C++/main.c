#include<stdio.h>
int fibo(int);

int main()
{
    int num=25,i,n=0;
    for(i=1;i<=num;i++)
    {
        printf("%d\t",fibo(n));
        n++;
    }
}
int fibo(int x)
{
    if(x==0 || x==1)
    return x;
    else
        return (fibo(x-1) + fibo(x-1));
}