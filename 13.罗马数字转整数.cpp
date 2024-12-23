#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <iterator>
#include <string>
#include <map>
#include <functional>

using namespace std;

/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */

// @lc code=start
class Solution
{
public:
    int romanToInt(string s)
    {
        int result = 0;
        for (int index = s.length() - 1; index != -1; index--)
        {
            if (s[index] == 'I')
                result += 1;
            else if (s[index] == 'V')
            {
                if (index != 0 and s[index - 1] == 'I')
                {
                    result += 4;
                    --index;
                }
                else
                    result += 5;
            }
            else if (s[index] == 'X')
            {
                if (index != 0 and s[index - 1] == 'I')
                {
                    result += 9;
                    --index;
                }
                else
                    result += 10;
            }
            else if (s[index] == 'L')
            {
                if (index != 0 and s[index - 1] == 'X')
                {
                    result += 40;
                    --index;
                }
                else
                    result += 50;
            }
            else if (s[index] == 'C')
            {
                if (index != 0 and s[index - 1] == 'X')
                {
                    result += 90;
                    --index;
                }
                else
                    result += 100;
            }
            else if (s[index] == 'D')
            {
                if (index != 0 and s[index - 1] == 'C')
                {
                    result += 400;
                    --index;
                }
                else
                    result += 500;
            }
            else if (s[index] == 'M')
            {
                if (index != 0 and s[index - 1] == 'C')
                {
                    result += 900;
                    --index;
                }
                else
                    result += 1000;
            }
            cout << result << "---------------" << endl;
        }
        return result;
    }
};
// @lc code=end

