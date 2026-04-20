from typing import List

def findPos(nums: List[int], target: int) -> int:
    left, right = 0, 1
    
    # Exponential Search to find a range where target may exist
    while right < len(nums) and nums[right] < target:
        left = right
        right *= 2
        
    # Binary Search within the found range
    while left <= right:
        mid = (left + right) // 2
        
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            right = mid - 1
        else:
            left = mid + 1
    
    return -1


if __name__ == '__main__':
    nums = [3, 5, 7, 9, 10, 90, 100, 130, 140, 160, 170, 175, 180, 190] # ... +inf
    target = 140
    print(findPos(nums, target))

'''
Start with exponential jumps to quickly find a range where the target could exist. Once the range is identified, apply binary search within that bounded region to locate the exact element.
TC: O(log n)
SC: O(1)

Problem Link: https://www.geeksforgeeks.org/dsa/find-position-element-sorted-array-infinite-numbers/
'''