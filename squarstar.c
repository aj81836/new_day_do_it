#include<stdio.h>

int main(){
    int row,colm;

    printf("Enter colu: ");
    scanf("%d",&colm);
    printf("Enter the row: ");
    scanf("%d",&row);

    for(int i=0;i<row;i++){
        for(int j=0;j<colm;j++){
            if(i==0||i==row-1||j==colm-1||j==0){
                printf("* ");
            }else
            printf(" ");
            
        }
        printf("\n");
    }
}