import math

class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        # Returns total hours needed to eat all piles at a given speed
        def calculate_total_hours(piles, speed):
            total_hours = 0

            for pile in piles:
                total_hours += math.ceil(pile / speed)
            
            return total_hours
        
        # Binary Search on answer space (speed)
        left, right = 1, max(piles)

        while left <= right:
            mid = (left + right) // 2 # mid = current eating speed (K bananas/hour)
            
            total_hours = calculate_total_hours(piles, mid)

            if total_hours <= h:
                right = mid - 1
            else:
                left = mid + 1

        return left # minimum eating speed to finish all piles within h hours

# TC: O(N x log M) â where M = max(piles)
# SC: O(1)