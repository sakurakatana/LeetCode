#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <iterator>

using namespace std;

/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        vector<int>::iterator l = height.begin();
        vector<int>::iterator r = --height.end();
        int maxs = -1;
        while (true)
        {
            int len = abs(distance(r, l));
            int tmp;
            if (*l < *r)
            {
                tmp = *l * len;
                ++l;
            }
            else
            {
                tmp = *r * len;
                --r;
            }
            maxs = max(maxs, tmp);
            if (l == r)
                break; 
        }
        return maxs;
    }
};
// @lc code=end

