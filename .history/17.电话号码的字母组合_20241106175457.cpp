/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

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

using namespace std;


// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) 
    {
        queue<string> q;
        map<char, string> mp = {{'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mon"},
                                {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        
        string tmp_str = "";
        string tmp_result = "";
        string tmp_p = "";
        for (int i = 0; i < digits.size(); i++)
        {
            tmp_str = mp[digits[i]];
            
            for (int j = 0; j < tmp_str.size(); j++)
            {

            }
        }
    }
};
// @lc code=end

