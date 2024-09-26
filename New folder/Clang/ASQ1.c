#include<stdio.h>
int sum(int,int);
int diff(int,int);
int mult(int,int);

int main(){
    int num1,num2,product,add,difference;
     
   printf("Enter the number:");
   scanf("%d %d",&num1,&num2);
   add=sum(num1,num2);
   difference=diff(num1,num2);
   product=mult(num1,num2);

   printf("sum=%d\ndifferenc=%d\n product=%d\n",add,difference,product);
}
int sum(int a,int b)
{
    int x;
    x=a+b;
    return x;
}
int mult(int a,int b)
{
    int x;
    x=a*b;
    return x;
}
int diff(int a,int b)
{
    int x;
    x=a-b;
    return x;
}