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

using namespace std;

class Solution {
public:
    bool isValid(string s) 
    {
        queue<char> q;
        for (int i; i < s.size(); i++)
        {
            if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            {
                q.push(s[i]);
                continue;
            }
            if (s[i] == '}' && q.front() == '{')
                q.pop();
            if (s[i] == ']' && q.front() == '[')
                q.pop();
            if (s[i] == ')' && q.front() == '(')
                q.pop();
        }
        bool flag = false;
        cout << s.empty() << endl;
        if (s.empty())
            flag = true;
        return flag;
    }
};
// @lc code=end

