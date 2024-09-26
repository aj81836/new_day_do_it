#include<stdio.h>
/*
int main(){
 for(int i=0;i<5;i++)
  if(i<1){
    printf("*\n");
  }else if (i<=1)
  {
    printf("**\n");
  }else if (i<=2)
  {
    printf("***\n");
  }else if (i<=3)
  {
    printf("****\n");

  }else
   printf("*****\n");

return 0;

}
*/
/*
int main()
{
    int n;
    printf("enter value:\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
}
return 0;
}
*/


int main()
{
int n,m=1;

printf("Entern number:");
scanf("%d",&n);

for (int i = n; i >= 1; i--)
{
    for( int j = 1; j <=i-1; j++)
    {
        printf(" ");
    }for (int k = 1; k <= m;k++)
    {
       // printf("*");
        //printf("* ");
        printf(" *");
    }
    printf("\n");
    m++;
    
}
return 0;

}

