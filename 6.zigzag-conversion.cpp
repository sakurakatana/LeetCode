#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>

using namespace std;

/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution
{
public:
    string convert(string s, int numRows)
    {
        if (numRows == 1)
        {
            // cout << s << endl;
            return s;
        }
        char map[1005][1005];
        for (int i = 0; i < 1005; i++)
            for (int j = 0; j < 1005; j++)
                map[i][j] = ' ';
        int flag = 0, tmp = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (tmp < numRows)
            {
                map[tmp][flag * (numRows - 1)] = s[i];
                tmp += 1;
            }
            else if (tmp <= 2 * numRows - 2)
            {
                map[numRows - i % (numRows - 1) - 1][i % (numRows - 1) + (numRows - 1) * flag] = s[i];
                tmp += 1;
            }
            if (tmp == 2 * numRows - 2)
            {
                flag += 1;
                tmp = 0;
            }
        }
        string answer = "";
        for (int i = 0; i < 1005; i++)
        {
            for (int j = 0; j < 1005; j++)
            {
                // cout << map[i][j] << " ";
                if (map[i][j] == ' ')
                    continue;
                answer += map[i][j];
            }
            // cout << endl;
        }
        return answer;
    }
};
// @lc code=end
