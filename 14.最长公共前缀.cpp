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
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int mini = 1<<20;
        cout << mini << endl;
        for (vector<string>::iterator iter = strs.begin(); iter != strs.end(); ++iter)
            mini = min(mini, int((*iter).length()));
        cout << mini << endl;
        string result;
        int len = 0;
        bool flag = true;
        for (int i = 0; i < mini; i++)
        {
            char c = strs[0][i];
            flag = true;
            for (int j = 0; j < strs.size(); j++)
            {
                if (strs[j][i] != c)
                {
                    flag = false;
                    cout << strs[j][i] << " **** " << c <<endl;
                    break;
                }
            }
            if (flag != true)
            {
                len = i;
                break;
            }
        }
        if (flag)
            len = mini;
        for (int i = 0; i < len; i++)
            result += strs[0][i];
        return result;
    }
};
// @lc code=end

