#include<stdio.h>

int main() {
    int n, count = 0;
    
    printf("Enter number:\n");
    scanf("%d", &n);
    
    
    for (int i = 0; i <= n / 2; i++) {
        printf("%d", i);
    }
    printf("\n");

    for (int j = (n / 2) + 1; j <= n; j++) {
        printf("%d", j);
    }
    printf("\n_______________________\n");

    
    int half = n / 2;
    for (int i = 0; i <= half; i++) {
        printf("%d ", i);
        
         if (i + half + 1 <= n) {
            printf("%d", i + half + 1);
        }
       
        printf("\n"); 
    }

    return 0;
}
