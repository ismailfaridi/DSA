class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums) # unique elements
        max_len = 0

        for num in numSet:
            if (num - 1) not in numSet: # start only if it's the beginning of a sequence
                cur_len = 0
                
                while (num + cur_len) in numSet: # count consecutive numbers
                    cur_len += 1
                
                max_len = max(max_len, cur_len)
        
        return max_len

# Only start counting when a number has no previous neighbor, then expand forward to count the full sequence.
# TC: O(N)
# SC: O(N)