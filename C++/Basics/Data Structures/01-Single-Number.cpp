#include <iostream>
using namespace std;

/*
136. Single Number
https://leetcode.com/problems/single-number/description/

- Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
- You must implement a solution with a linear runtime complexity and use only constant extra space.

--------------------------------------------------------
Bitwise XOR:
- Similar: 0
- Dissimilar: 1

1^1=0, 0^0=0, 1^0=1, 0^1=1

Duplicate: n^n = 0
Unique:    n^0 = n

[4, 100
2,  010
2]  010
    ---
    100 => 4

TC: O(n)
SC: O(1)
*/

#include <vector>
class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        for (auto i : nums)
            ans ^= i;
        return ans;
    }
};