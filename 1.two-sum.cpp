#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        int one, two;
        for (int i = 0; i < nums.size(); i++)
        {
            // if (nums[i] > target)
            //     break;
            int other = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] == other)
                {
                    one = i;
                    two = j;
                    break;
                }
                // else if (nums[j] > other)
                //     break;
            }
        }
        return vector<int>{one, two};
    }
};
// @lc code=end
