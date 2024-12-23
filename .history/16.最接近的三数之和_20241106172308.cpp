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
        int one_value, two_value;
        pair<int, int> tmp_index;
        int diff = INT_MAX;
        int result = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            one_value = INT_MAX;
            two_value = INT_MAX;
            for (int j = i + 1; j < nums.size(); j++)
            {
                tmp_target = target - nums[i] - nums[j];
                tmp_index = binary_search(j + 1, nums.size() -1, tmp_target, nums);
                if (tmp_index.first < nums.size() && tmp_index.first > j)
                    one_value = abs(tmp_target - nums[tmp_index.first]);
                if (tmp_index.second < nums.size() && tmp_index.second > j)
                    two_value = abs(tmp_target - nums[tmp_index.second]);
                if (one_value < diff)
                {
                    result = nums[tmp_index.first] + nums[i] + nums[j];
                    diff = one_value;
                }
                if (two_value < diff)
                {
                    result = nums[tmp_index.second] + nums[i] + nums[j];
                    diff = two_value;
                }
            }
        }
        return result;
    }
};

pair<int, int> binary_search(int l, int r, int value, vector<int>& nums)
{
    int index = -1;
    while (l <= r)
    {
        cout << "------" << l << "=============" << r << endl;
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