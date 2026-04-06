class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        i = 0  # idx of last unique element

        for j in range(1, len(nums)):
            # if numbers are different, inc i and place new unique element
            if nums[i] != nums[j]:
                i += 1
                nums[i] = nums[j]

        return i + 1  # no of unique elements