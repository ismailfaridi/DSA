#include <iostream>
#include <vector>
#include <algorithm> // sort
using namespace std;

/*
169. Majority Element
https://leetcode.com/problems/majority-element/
Given an array nums of size n, return the majority element.
The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always EXISTS in the array.

# Moore's Voting Algorithm
- Same element: freq++
- Diff elment: freq--
- At last the largest frequency element dominate.
=> Array must have a majority element.

TC: O(n)
SC: O(1)
*/

// O(n^2)
int brute_force(vector<int> nums)
{
    for(auto i : nums){
        int freq = 0;

        for(auto j : nums){
            if(i == j){
                freq++;
            }
        }

        if(freq > nums.size()/2){
            return i;
        }
    }

    return -1;
}

// O(n log n) => sorting
int optimize(vector<int> nums)
{
    sort(nums.begin(), nums.end()); // sort

    int freq = 1, ans = nums[0], n = nums.size();

    for(int i=1; i<n; i++) {
        if(nums[i] == nums[i-1]){
            freq++;
        }
        else {
            freq = 1;
            ans = nums[i];
        }

        if(freq > n/2){
            return ans;
        }
    }

    return ans;
}

// Moore's Voting Algorithm
// O(n)
int moores_voting_algo(vector<int> nums)
{
    int freq = 0, ans = 0, n = nums.size();

    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(nums[i] == ans) {
            freq++;
        }
        else {
            freq--;
        }
    }

    return ans;
}

// If ME exist return that element, otherwise return -1
// Moore's Voting Algorithm + sum more cases
int majority_element_variation(vector<int> nums)
{
    int freq = 0, ans = 0, n = nums.size(), count = 0;

    for(int i=0; i<n; i++) {
        if(freq == 0) {
            ans = nums[i];
        }

        if(nums[i] == ans) {
            freq++;
        }
        else {
            freq--;
        }
    }

    for(auto i : nums) {
        if(i == ans){
            count++;
        }
    }

    if(count > n/2) {
        return ans;
    }
    else {
        return -1;
    }
}

int main()
{
    vector<int> vec = {1, 2, 2, 1, 1};
    vector<int> vecV = {1, 2, 3};

    cout << "Majority Element: " << brute_force(vec) << endl;
    cout << "Majority Element: " << optimize(vec) << endl;
    cout << "Majority Element: " << moores_voting_algo(vec) << endl;
    
    cout << "Majority Element: " << majority_element_variation(vecV) << endl;
}

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq = 0, ans = 0, n = nums.size();

        for(int i=0; i<n; i++) {
            if(freq == 0) {
                ans = nums[i];
            }

            if(nums[i] == ans) {
                freq++;
            }
            else {
                freq--;
            }
        }

        return ans;
    }
};
*/