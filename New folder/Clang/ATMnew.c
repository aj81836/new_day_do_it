#include<stdio.h>

unsigned long amount=2000,deposition,withdeawal;
int pin,choice,k;
char transaction='y';

void main(){
    while (pin!=2020) 
    {
     printf("Type your pin number:");
     scanf("%d",&pin);
     if (pin!=2020)
     {
        printf("Please insert your valid password:\n");
     }
    do
    {
    printf("Hello welcome to our ATM Service\n");
    printf("1. Balance cheking\n");
    printf("2.cash Withdrawal\n");
    printf("3.cash Deposition\n");
    printf("4.Exit\n");
    printf("***********?***********?*************\n\n");
    printf("Plese proceed with your choice: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("\n the account balance in Rs: %lu",amount);
        break;
    case 2:
        printf("\n Insert the amount to be withdrawal: ");
        scanf("%lu",&withdeawal);
    if (withdeawal % 100 !=0)
    {
        printf("\n your are requested to insert the amount in multiples of 100");
    }
    else if (withdeawal > (amount - 500))
    {
        printf("\n you are having an insufficient balance");
    }
    else
    {
     amount=amount-withdeawal;
     printf("\n\n yoy can now collect the cash");
     printf("\n The current balance is %lu",amount);   
    }
    break;
    case 3:
    printf("\n Insert the amount to be deposited");
    scanf("%lu",&deposition);
    amount=amount+deposition;
    printf("the balance is  %lu",amount);
    break;
    case 4:
    printf("\n we are thankful to you USING our ATM services!");
    break;
    
    default:
    printf("\n you have made an invalid choice");
    }
    
        break;
    
    } 
    
    }
    
}