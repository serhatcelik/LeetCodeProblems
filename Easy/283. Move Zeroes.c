/*
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.



Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
*/
void moveZeroes(int* nums, int numsSize){
    int zeroP = 0;
    int iterP = 0;

    while (iterP < numsSize){
        if (nums[iterP] != 0){
            int temp = nums[iterP];
            nums[iterP] = nums[zeroP];
            nums[zeroP] = temp;
            zeroP++;
        }
        iterP++;
    }
}
