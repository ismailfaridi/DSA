class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}  # num, idx

        for idx, num in enumerate(nums):
            complement = target - num  # value needed with current num to reach target

            if complement in hashmap:
                return [hashmap[complement], idx]

            hashmap[num] = idx

# TC: O(N)
# SC: O(N)