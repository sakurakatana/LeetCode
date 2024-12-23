#include <iostream>
#include <cmath>

using namespace std;

/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution
{
public:
    int reverse(int x)
    {
        int answer = 0, tmp = 0;
        bool flag = false;
        while (x != 0)
        {
            tmp = x % 10;
            if (x >= 0 and answer != 0)
            {
                if (INT32_MAX / answer < 10)
                    return 0;
                else if (INT32_MAX / answer == 10 and INT32_MAX % 10 < tmp)
                    return 0;
            }
            if (x < 0 and answer != 0)
            {   
                // cout << INT32_MIN / 10 << " **-----------** " << answer << endl;
                // cout << INT32_MIN % 10 << "////////////////////////" << tmp << endl;
                if (INT32_MIN / 10 > answer)
                    return 0;
                else if (INT32_MIN / 10 == answer and INT32_MIN % 10 > tmp)
                    return 0;
            }
            answer = answer * 10 + tmp;
            x = x / 10;
        }
        // INT32_MAX
        return answer;
    }
};

// @lc code=end
