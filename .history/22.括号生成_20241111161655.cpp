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

void make_result(stack<char> st, int num, int target, string tmp_result, vector<string>& result);

class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> result;
        string tmp_result = "";
        stack<char> st;
        make_result(st, 0, n, tmp_result, result);
        for (auto iter = result.begin(); iter != result.end(); ++iter)
            cout << *iter << endl;
        return result;
    }
};

void make_result(stack<char> st, int num, int target, string tmp_result, vector<string>& result)
{
    cout << num << "**********" << target << endl;
    if (num == target)
    {
        int size = st.size();
        string tmp = "";
        while (!st.empty())
        {
            tmp_result.push_back(st.top());
            st.pop();
            tmp.push_back(')');
        }
        tmp_result += tmp;
        cout << tmp_result << endl;
        result.push_back(tmp_result);
    }
    st.push('(');
    make_result(st, num + 1, target, tmp_result, result);
    st.pop();
    if (!st.empty())
    {
        tmp_result.push_back(st.top());
        st.pop();
        tmp_result.push_back(')');
        make_result(st, num + 1, target, tmp_result, result);
    }
    return;
}
// @lc code=end