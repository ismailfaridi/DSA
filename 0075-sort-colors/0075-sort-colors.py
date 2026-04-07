class Solution:
    def sortColors(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        low, cur, high = 0, 0, len(nums) - 1

        while cur <= high:
            if nums[cur] == 0:
                nums[low], nums[cur] = nums[cur], nums[low]
                low += 1
                cur += 1
            elif nums[cur] == 2:
                nums[high], nums[cur] = nums[cur], nums[high]
                high -= 1
            else:
                cur += 1

# Dutch National Flag Algorithm / Three Pointers
# TC: O(N)
# SC: O(1)