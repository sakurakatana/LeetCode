#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int l1_value, l2_value, sum, tmp;
        ListNode *answer = nullptr;
        ListNode *tmp_iter = nullptr;
        // cout << tmp_iter << endl;
        tmp = 0;
        while (l1 != nullptr or l2 != nullptr)
        {
            if (l1 == nullptr)
                l1_value = 0;
            else
            {
                l1_value = l1->val;
                l1 = l1->next;
            }

            if (l2 == nullptr)
                l2_value = 0;
            else
            {
                l2_value = l2->val;
                l2 = l2->next;
            }

            sum = l1_value + l2_value + tmp;

            tmp = sum / 10;
            // ListNode node = ListNode(tmp);
            ListNode *node = new ListNode(sum % 10);

            if (nullptr == answer)
            {
                tmp_iter = node;
                answer = node;
            }
            else
            {
                tmp_iter->next = node;
                tmp_iter = tmp_iter->next;
            }
        }

        while (tmp != 0)
        {
            ListNode *node = new ListNode(tmp % 10);
            tmp = tmp / 10;

            // cout << node.val << endl;
            // cout << node.next << endl;
            if (answer == nullptr)
            {
                answer = node;
                tmp_iter = node;
            }
            else
            {
                tmp_iter->next = node;
                tmp_iter = tmp_iter->next;
            }
        }
        return answer;
    }
};
// @lc code=end
