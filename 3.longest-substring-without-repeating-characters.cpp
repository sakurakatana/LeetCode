#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>

using namespace std;

/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        s = " " + s;
        int maxs = 0, continuous = 0, stop = 0;
        map<char, int> flag;
        for (int i = 1; i < s.size(); i++)
        {
            if (flag.find(s[i]) == flag.end())
            {
                continuous += 1;
            }
            else
            {
                // continuous = i - max(flag[s[i]], stop);
                if (stop > flag[s[i]])
                {
                    continuous += 1;
                }
                else
                {
                    continuous = i - flag[s[i]];
                    stop = flag[s[i]];
                }
            }
            maxs = max(maxs, continuous);
            flag[s[i]] = i;
        }

        return maxs;
    }
};
// @lc code=end
