/*
Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

    For example, 121 is a palindrome while 123 is not.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
*/
bool isPalindrome(int x){
    int len;
    char str[12];

    len = sprintf(str, "%d", x);

    if (len == 1) {
        return true;
    }

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }

    return true;
}
