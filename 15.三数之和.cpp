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

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start

int binary_search(vector<int>& nums, int value, int start);

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> score_set;
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int value = 0;
        int index = -1;
        for (int i = 0; i < len; i++)
        {
            for (int j = i + 1; j < len; j++)
            {
                value = nums[i] + nums[j];
                index = binary_search(nums, 0-value, j + 1);
                if (index != -1)
                {
                    vector<int> tmp = {nums[i], nums[j], nums[index]};
                    score_set.insert(tmp);
                }
            }
        }

        vector<vector<int>> score;
        score.assign(score_set.begin(), score_set.end());
        for (set<vector<int>>::const_iterator iter = score_set.begin(); iter != score_set.end(); iter++)
        {
            cout << iter->size() << endl;
            for (int i=0; i < iter->size(); i++)
                cout << iter->at(i) << " ";

            for (vector<int>::const_iterator it=iter->begin(); it != iter->end(); it++)
                cout << *it << " ";
            cout << endl;
        }

        return score;
    }
};

int binary_search(vector<int>& nums, int value, int start)
{

    int l = start, r = nums.size() - 1;
    int index;
    while (l <= r)
    {
        index = (l + r) / 2;
        if (nums[index] < value)
            l = index + 1;
        else if (nums[index] > value)
            r = index - 1;
        else
            return index;
    }
    return -1;
}

// @lc code=end