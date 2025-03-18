#include <iostream>
#include <climits>
using namespace std;

/*
53. Maximum Subarray Sum
https://leetcode.com/submissions/detail/1577733882/
Given an integer array nums, find the subarray with the largest sum, and return its sum.

# Kadane's Algorithm
- Instead of adding -ve numbers in the current sum, we can ignore the -ve because it doesn't adding up in the final answer. So we will focus on only positive numbers, and if we got negative numbers then we reset the current sum to 0.
- DP algorithm, also has some characteristics of Greedy.
*/

// Print all subarray O(n^3)
void subarrays(int arr[], int n)
{
    for(int st=0; st<n; st++)
    {
        for(int end=st; end<n; end++)
        {
            for(int i=st; i<=end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

// O(n^3)
int brute_force(int arr[], int n)
{
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++)
    {
        for(int end=st; end<n; end++)
        {
            int sum = 0;

            for(int i=st; i<=end; i++)
                sum += arr[i];
            
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

// O(n^2)
int better(int arr[], int n)
{
    int maxSum = INT_MIN;
    for(int st=0; st<n; st++)
    {
        int curSum = 0;
        for(int end=st; end<n; end++)
        {
            curSum += arr[end];
            maxSum = max(curSum, maxSum);
        }
    }
    return maxSum;
}

// Kadane's Algorithm O(n)
int kadane(int arr[], int n)
{
    int maxSum = INT_MIN, curSum = 0;
    for(int i=0; i<n; i++)
    {
        curSum += arr[i];
        maxSum = max(curSum, maxSum);

        if(curSum < 0) curSum = 0; // handel edge case also [-1,-2,-3,..] leads to -ve
    }
    return maxSum;
}

int main()
{
    int n = 7; 
    int arr[n] = {3, -4, 5, 4, -1, 7, -8};

    // subarrays(arr, n);
    cout << "Max Subarray Sum: " << brute_force(arr, n) << endl;
    cout << "Max Subarray Sum: " << better(arr, n) << endl;
    cout << "Max Subarray Sum: " << kadane(arr, n) << endl;
}

#include <vector>
class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int maxSum = INT_MIN, curSum = 0;
    
            for(auto val : nums){
                curSum += val;
                maxSum = max(curSum, maxSum);
    
                if(curSum < 0) curSum = 0;
            }
    
            return maxSum;
        }
    };