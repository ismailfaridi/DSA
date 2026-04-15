# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        left, right = 1, n

        while left < right:
            mid = (left + right) // 2

            if isBadVersion(mid):
                right = mid     # mid could be the first bad version, so keep it
            else:
                left = mid + 1  # mid is good, discard left half including mid
        
        return left # return right also works since at the end left == right