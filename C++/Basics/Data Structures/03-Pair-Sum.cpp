#include <iostream>
#include <vector>
using namespace std;

// # Pair Sum
// Return Pair of given Sorted Array with target sum;

// O(n^2)
vector<int> brute_force(vector<int> nums, int targetSum)
{
    vector<int> ans;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == targetSum)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }

    return ans;
}

// O(n)
// Two Pointer Approach. Using sorted property.
vector<int> pairSum(vector<int> nums, int targetSum)
{
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n - 1;

    while(i < j)
    {
        int pairSum = nums[i] + nums[j];

        if(pairSum > targetSum)
            j--;
        else if(pairSum < targetSum)
            i++;
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }

    return ans;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> ans = brute_force(nums, target);
    if (!ans.empty())
        cout << ans[0] << ", " << ans[1] << endl;
    else
        cout << "No pair sum to target exist." << endl;

    vector<int> result = pairSum(nums, target);
    if (!result.empty())
        cout << result[0] << ", " << result[1] << endl;
    else
        cout << "No pair sum to target exist." << endl;
}

// 167. Two Sum II - Input Array Is Sorted
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// Two Pointer Approach
// TC: O(N)
// SC: O(1)

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int i=0, j=n-1;

        while(i < j)
        {
            int pairSum = numbers[i] + numbers[j];

            if(pairSum > target) j--;
            else if(pairSum < target) i++;
            else {
                // 1 indexed array
                ans.push_back(i + 1);
                ans.push_back(j + 1);
                return ans;
            }
        }
        return ans;
    }
};
*/