/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
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
#include <queue>

using namespace std;


// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        int l, r;
        int sum = 0;
        int tmp_sum = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> tmp_result;
        unordered_map<vector<vector<int>>, bool> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                l = j + 1;
                r = nums.size() - 1;
                sum = nums[i] + nums[j];
                while (l < r)
                {
                    cout << l << "+++++++++++++++" << r << endl;
                    tmp_sum = sum + nums[l] + nums[r];
                    if (tmp_sum < target)
                        ++l;
                    else if (tmp_sum > target)
                        --r;
                    else
                    {
                        // tmp_result.clear();
                        tmp_result = {nums[i], nums[j], nums[l], nums[r]};
                        if (mp.find(tmp_result))
                        result.push_back(tmp_result);
                        break;
                    }
                }

            }
        }
        return result;
    }
};
// @lc code=end

