class Solution:
    def largestOddNumber(self, num: str) -> str:
        for i in range(len(num) - 1, -1, -1): # traverse the string from the end to start.
            if int(num[i]) % 2 == 1: # check if the current digit is odd.
                return num[:i + 1]
        return ""