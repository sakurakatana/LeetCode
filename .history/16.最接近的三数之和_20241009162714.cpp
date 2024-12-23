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
int binary_search(vector<int>& nums, int value, int start, int sum);

class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int mins = __INT_MAX__;
        cout << mins << endl;
        stable_sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = -1;
            int target_diff = -1;
            int tmp; 
            for (int j = i + 1; j < nums.size(); j++)
            {
                sum = nums[i] + nums[j];
                target_diff = target - sum;
                tmp = binary_search(nums, target_diff, j, sum);
                mins = min(mins, tmp);
            }
        }
        return mins;
    }
};

int binary_search(vector<int>& nums, int value, int start, int sum)
{
    int l = start;
    int r = nums.size() - 1;
    int index = -1;
    while (l <= r)
    {
        index = (l + r) / 2;
        if (nums[index] < value)
            l = index + 1;
        else
            r = index - 1;
    }
    int l_tmp = __INT_MAX__;
    if (l < nums.size())
        l_tmp = nums[l];
    int r_tmp = __INT_MAX__;
    if (r < nums.size())
        r_tmp = nums[r];
    
    return min(l_tmp, r_tmp);
}

// @lc code=end