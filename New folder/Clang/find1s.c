/*
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. 
The maximum number of consecutive 1s is 3.
*/
#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count=0,maxCount=0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            count++;  
        } else {
            if (count > maxCount) {
                maxCount = count;  
            }
            count = 0;  
        }
    }
    
      if (count > maxCount) {
        maxCount = count;
    }

    return maxCount;
}

int main() {
    int nums[7] = {1, 1, 0, 1, 1, 1,1};
    int maxConsecutiveOnes = findMaxConsecutiveOnes(nums, 7);
    printf("Max consecutive 1's: %d\n", maxConsecutiveOnes);
    return 0;
}
