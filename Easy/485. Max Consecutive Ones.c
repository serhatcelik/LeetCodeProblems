/*
Given a binary array nums, return the maximum number of consecutive 1's in the array.



Example 1:

Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
*/
int findMaxConsecutiveOnes(int* nums, int numsSize){
    int maxOnes = 0;
    int temp = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] == 1){
            maxOnes++;
        }
        else{
            if (maxOnes > temp){
                temp = maxOnes;
            }
            maxOnes = 0;
        }
    }
    return maxOnes > temp ? maxOnes : temp;
}
