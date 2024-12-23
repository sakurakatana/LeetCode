/*
 * @lc app=leetcode.cn id=16 lang=cpp
 *
 * [16] 最接近的三数之和
 */

#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <iterator>
#include <string>
#include <map>
#include <set>
#include <functional>

using namespace std;

// @lc code=start
pair<int, int> binary_search(int l, int r, int value, vector<int>& nums);

class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int tmp_target = -1;
        pair<int, int> tmp_index;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                tmp_target = target - nums[i] - nums[j];
                tmp_index = binary_search(j + 1, nums.size() -1, tmp_target, nums);

            }
        }
    }
};

pair<int, int> binary_search(int l, int r, int value, vector<int>& nums)
{
    int index = -1;
    while (l <= r)
    {
        index = (l + r) / 2;
        if (nums[index] < value)
            l = index + 1;
        else if(nums[index] >= value)
            r = index - 1;
    }
    pair<int, int> t;
    t.first = l;
    t.second = r;
    return t;
}

// @lc code=end