#include<stdio.h>

int main()
{

    int num,a;
    printf("Enter the nnumber:\n");
    scanf("%d",&num);

    for(int i=1;i<=10;i++)
    {
        a=num*i;
      printf("%d\n",a);
    }

}