class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        rows = len(matrix)
        cols = len(matrix[0])
        col_0 = 1 # flag to track whether the first column should be zero

        # If any 0 found then we'll mark her most left and most top as 0.
        # if element is in 0th column (j == 0) then we can't use m[0][0], so we'll use col_0 = 0 to track 0th column separately.
        for i in range(rows):
            for j in range(cols):
                if matrix[i][j] == 0:
                    matrix[i][0] = 0 # most left
                    if j != 0:
                        matrix[0][j] = 0 # most top
                    else:
                        col_0 = 0

        # Traverse remaining matrix; for each cell, check its most left and most top. If either is 0, make that cell 0.
        for i in range(1, rows):
            for j in range(1, cols):
                if (matrix[i][0] == 0) or (matrix[0][j] == 0):
                    matrix[i][j] = 0

        # If matrix[0][0] == 0, make the entire 0th row zero.
        if matrix[0][0] == 0:
            for j in range(cols):
                matrix[0][j] = 0

        # If col_0 == 0, make the entire 0th column zero.
        if col_0 == 0:
            for i in range(rows):
                matrix[i][0] = 0

# This algorithm achieves O(1) space complexity by **reusing the first row and column as markers to track which lines need zeroing**. It first scans the matrix to set these boundary markers, then updates the inner cells based on their corresponding row/column flags. Finally, it handles the first row and column separately, using a dedicated variable for the first column to prevent overwriting critical marker information during the initial pass.
# TC: O(m x n)
# SC: O(1)