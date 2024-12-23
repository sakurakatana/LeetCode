#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>

using namespace std;

/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution
{
public:
    string longestPalindrome(string s)
    {
        s = " " + s;
        int maxs = -1, i_max, j_max;
        bool map[1005][1005] = {0};
        for (int j = 1; j < s.size(); j++)
        {
            for (int i = 1; i <= j; i++)
            {
                // cout << "i: " << i << " j: " << j << endl;
                // cout << "s[i]: " << s[i] << " s[j]: " << s[j] << endl;
                if (s[i] == s[j])
                {
                    if (i == j or (map[i + 1][j - 1] == 1 and j - i > 1) or (map[i][j - 1] == 1 and j - i == 1))
                    {
                        map[i][j] = 1;
                        if (maxs < j - i)
                        {
                            maxs = j - i;
                            i_max = i;
                            j_max = j;
                        }
                    }
                }
            }
        }

        // for (int i = 1; i < s.size(); i++)
        // {
        //     for (int j = 1; j <s.size(); j++)
        //     {
        //         cout << map[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        return s.substr(i_max, j_max - i_max + 1);
    }
};
// @lc code=end
