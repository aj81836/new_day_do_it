#include<stdio.h>

int main(){
    int R;
    printf("enter the row:\n");
    scanf("%d",&R);

    for (int i = 1; i <=R; i++){
        for (int j = 1; j <=i; j++)
        {
            if((j+i)%2==0){
                printf("1");

            }else
            printf("0");
        }
        printf("\n");
    }
    return 0;
    
}