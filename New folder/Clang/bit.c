#include<stdio.h>

int toggleBit(int num,int bitpos){
    num^=(1<<bitpos);
    return num;
}
int setBit(int num,int bitpos){
    num |=(1<<bitpos);
    return num;
}
int clearBit(int num,int bitpos){
    num &=~(1<<bitpos);
    return num;
}

int main(){
    int num,bitpos;

    printf("Enter the bitnumber:\n");
    scanf("%d",&num);
    printf("Enter the position:\n");
    scanf("%d",&bitpos);

    int tog=toggleBit(num,bitpos);
    int set=setBit(num,bitpos);
    int cler=clearBit(num,bitpos);

    printf("number after togale: %d\n",tog);
    printf("number after set: %d\n",set);
    printf("number after clear: %d\n",cler);

    return 0;
}