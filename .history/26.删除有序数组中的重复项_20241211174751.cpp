/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start


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
#include <unordered_set>
#include <stack>
#include <deque>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int index = 0;
        bool flag = false;
        int num = 1;
        for (int i = 1; i <= nums.size(); i++)
        {
            if (i == nums.size())
            {
                if (flag == true)
                {
                    nums[index] = nums[i];
                }
                continue;
            }
            if (nums[i] == nums[index])
            {
                if (flag == false)
                {
                    index = num;
                    flag = true;
                }
            }
            else
            {
                if (flag == true)
                {
                    nums[index] = nums[i];
                    flag = false;
                }
                index = num;

                ++num;
            }
        }
        return num;
    }
};
// @lc code=end

