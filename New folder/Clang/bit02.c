#include<stdio.h>

void printbinery(int num){
    for(int i=31;i>=0;i--){
        printf("%d",(num>>i)& 1);
        if(i % 4 == 0) 
        printf("\n");
    }
}

int main(){
    int num;
    int bitpos;
    printf("Enter the num and bitpos:\n");
    scanf("%d",&num);
    scanf("%d",&bitpos);

    printbinery(num);

    num^=(1<<bitpos);
    printf("\nAfter toggle bit %d:\n",bitpos);
    printbinery(num);

    num&=~(1<<bitpos);
    printf("\nAfter clear bit %d:\n",bitpos);
    printbinery(num);

    num |= (1<<bitpos);
    printf("\nAfter setting bit %d:\n",bitpos);
    printbinery(num);

    return 0;
}