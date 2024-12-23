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
 * @lc app=leetcode id=12 lang=cpp
 *
 * [12] Integer to Roman
 */

// @lc code=start
class Solution {
public:
    string intToRoman(int num) 
    {
        map<int, string, greater<int>> num_str_mapping;
        num_str_mapping[1000] = "M";
        num_str_mapping[900] = "CM";
        num_str_mapping[500] = "D";
        num_str_mapping[400] = "CD";
        num_str_mapping[100] = "C";
        num_str_mapping[90] = "XC";
        num_str_mapping[50] = "L";
        num_str_mapping[40] = "XL";
        num_str_mapping[10] = "X";
        num_str_mapping[9] = "IX";
        num_str_mapping[5] = "V";
        num_str_mapping[4] = "IV";
        num_str_mapping[1] = "I";
        
        string result;
        for (map<int, string, greater<int>>::iterator iter = num_str_mapping.begin(); iter != num_str_mapping.end(); iter++)
        {
            int tmp = num / iter->first;
            for(int i = 0; i < tmp; i++)
                result += iter->second;
            num = num % iter->first;
        }
        cout << result << "---------" << endl;
        return result;
    }
};
// @lc code=end

