"""
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.



Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
"""
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left_pointer = 0
        right_pointer = len(nums) - 1
        result = []
        while left_pointer < right_pointer:
            lnum = abs(nums[left_pointer])
            rnum = abs(nums[right_pointer])
            if lnum > rnum:
                result.append(lnum ** 2)
                left_pointer += 1
            else:
                result.append(rnum ** 2)
                right_pointer -= 1
        if left_pointer == right_pointer:
            result.append(nums[left_pointer] ** 2)

        return result[::-1]
