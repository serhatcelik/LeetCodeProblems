/*
Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.



Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    int lp = 0;
    int rp = numsSize - 1;

    while (lp < rp){
        if (nums[lp] % 2 == 0){
            lp++;
        }
        else if (nums[rp] % 2 == 0){
            int temp = nums[rp];
            nums[rp] = nums[lp];
            nums[lp] = temp;
            lp++;
        }
        else{
            rp--;
        }
    }

    *returnSize = numsSize;
    return nums;
}
