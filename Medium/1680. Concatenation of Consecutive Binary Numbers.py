"""
Given an integer n, return the decimal value of the binary string formed by concatenating the binary representations of 1 to n in order, modulo 109 + 7.



Example 1:

Input: n = 1
Output: 1
Explanation: "1" in binary corresponds to the decimal value 1.
"""
class Solution:
    def concatenatedBinary(self, n: int) -> int:
        string = ""

        for i in range(1, n + 1):
            string += bin(i)[2:]

        return int(string, 2) % (10 ** 9 + 7)
