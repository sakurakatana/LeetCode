/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start

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
#include <unordered_set>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> q;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                q.push(s[i]);
                continue;
            }
            if (s[i] == '}' && q.top() == '{')
                q.pop();
            if (s[i] == ']' && q.top() == '[')
                q.pop();
            if (s[i] == ')' && q.top() == '(')
                q.pop();
        }
        bool flag = false;
        if (q.empty())
            flag = true;
        return flag;
    }
};
// @lc code=end

