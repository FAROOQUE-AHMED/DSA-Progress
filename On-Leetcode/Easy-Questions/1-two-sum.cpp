#include <iostream>
#include <vector>
using namespace std;

/*
LeetCode: 1. Two Sum
Link: https://leetcode.com/problems/two-sum/

Problem:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    return {i, j};
                }
            }
        }
        return {};
    }
};

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 17;

    Solution sol;
    vector<int> result = sol.twoSum(nums, target);

    cout << "[" << result[0] << "," << result[1] << "]" << endl;
    return 0;
}
