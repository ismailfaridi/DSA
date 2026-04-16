class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix or not matrix[0]:
	        return []
	        
        # bottom (rows), right (cols)
        top, bottom = 0, len(matrix) -  1
        left, right = 0, len(matrix[0]) - 1
        res = []

        while (top <= bottom) and (left <= right):
            # Top: left to right
            for j in range(left, right + 1):
                res.append(matrix[top][j])
            top += 1

            # Right: top to bottom
            for i in range(top, bottom + 1):
                res.append(matrix[i][right])
            right -= 1

            # Check bounds to avoid duplicates.
            if top <= bottom:
		        # Bottom: right to left
                for j in range(right, left - 1, -1):
                    res.append(matrix[bottom][j])
                bottom -= 1

            if left <= right:
		        # Left: bottom to top
                for i in range(bottom, top - 1, -1):
                    res.append(matrix[i][left])
                left += 1

        return res

# Boundary Shrink Method
# - Define 4 boundaries: top, bottom, left, right
# - Traverse clockwise: Top â Right â Bottom â Left
# - Shrink the corresponding boundary after traversing each side
# - Stop the loop when boundaries become invalid

# TC: O(M x N)
# SC: O(1) â If ignore res, otherwise O(M x N)