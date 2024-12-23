// // #include<stdio.h>

// //  int main()
// // {
// //     int arr[]={4,12,3,6,9,13,15,1,11,5,7,99,0};
// //     int n=sizeof(arr)/sizeof(arr[0]);

// //     int smallest=arr[0];
// //     int largest=arr[0];

// //     for (int i = 1; i < n; i++)
// //     {
// //         if (arr[i]<smallest)
// //         {
// //             smallest=arr[i];
// //         }
// //         if (arr[i]>largest)
// //         {
// //             largest=arr[i];
// //         }
        
        
// //     printf("smallest:%d\n",smallest);
// //     printf("largest:%d\n",largest);
    
// //     return 0;
// // }
// // //find element int array:

// #include<stdio.h>

// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int num=8,count=0;
//     for (int i = 0; i < n; i++)
//     {   
//         count++;
//         if (num==arr[i])
//         {
//             printf("the number is:%d  foun this index: %d  count is:%d\n",num,arr[i],count);
//             break;
//         }else

//         printf("Not found index:%d\n",arr[i]);
        
        
           
//     }
//     //printf("this number is not found in array:%d\n",num);
    
//     return 0;
    
// }
#include<stdio.h>

int main(){
    int arr[]={12,11,14,3,6,8,5,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);

    int smallst=arr[0];
    int largest=arr[0];

    for (int i = 1; i < n; i++)
    {
        if(arr[i]<smallst){
            smallst=arr[i];
        }
        if (arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
    printf("smallest number is:%d\n",smallst);
    printf("largest number is:%d\n",largest);
    return 0;
    
}