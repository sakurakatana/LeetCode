#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>

using namespace std;

/*
 * @lc app=leetcode id=8 lang=cpp
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
class Solution
{
public:
    int myAtoi(string s)
    {
        bool num = false;
        bool flag_start = false;
        int flag_op = 1;
        long long int answer_tmp = 0;
        int answer;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] < '0' or s[i] > '9')
            {
                if (flag_start)
                    break;
                if (s[i] == '-')
                {
                    flag_op = -1;
                    flag_start = true;
                }
                else if (s[i] == '+')
                {
                    flag_op = 1;
                    flag_start = true;
                }
                else if (s[i] == ' ')
                    continue;
                else
                    break;
            }
            if (s[i] >= '0' and s[i] <= '9')
            {
                flag_start = true;
                answer_tmp = answer_tmp * 10 + (s[i] - '0') * flag_op;
                if (answer_tmp > INT32_MAX)
                {
                    answer_tmp = INT32_MAX;
                    break;
                }
                if (answer_tmp < INT32_MIN)
                {
                    answer_tmp = INT32_MIN;
                    break;
                }
                // cout << "******* " << answer << endl;
            }
        }
        answer = int(answer_tmp);
        return answer;
    }
};
// @lc code=end
