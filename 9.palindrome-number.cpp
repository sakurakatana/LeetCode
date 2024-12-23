#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <string>
#include <set>
#include <map>

using namespace std;

/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string l = to_string(x);
        string r = l;
        reverse(r.begin(), r.end());
        // cout << l << " ----------- " << r << endl;
        bool flag = true;
        if (l != r)
            flag = false;
        return flag;
    }
};
// @lc code=end

