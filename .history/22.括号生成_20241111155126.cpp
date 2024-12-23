/*
 * @lc app=leetcode.cn id=22 lang=cpp
 *
 * [22] 括号生成
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
    vector<string> generateParenthesis(int n) 
    {
        vector<string> result;
        string tmp_result = "";
        stack<char> st;
    }
};

void make_result(stack<char> st, int num, int target, string tmp_result, vector<string>& result)
{
    if (num == target)
    {
        int size = st.size();
        tmp_result.push_back(st.top());
        st.pop();
        
    }
    return;
}
// @lc code=end