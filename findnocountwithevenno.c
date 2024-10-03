#include<stdio.h>
int newcount(int n){
    int count1=0;
    while (n!=0)
    {
        n=n/10;
        count1++;
    }
    return count1;
    
}
int findcount1(int *nums,int size){
    int count=0;
    for(int i=0;i<size;i++){
        int set=newcount(nums[i]);
        printf("array number%d: is count is%d\n",nums[i],set);
        if (set%2==0)
        {
            count++;
        }
        
    }
    return count;
}

int main(){
    int nums[]={12,123,1,2,1234};
    int size=sizeof(nums)/sizeof(nums[0]);
    int new=findcount1(nums,size);
    printf("even number all number%d",new);
    return 0;
}