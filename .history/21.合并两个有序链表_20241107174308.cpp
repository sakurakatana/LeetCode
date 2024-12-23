/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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

//  struct ListNode 
//  {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };


class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* head;
        ListNode* tmp = head;
        while (list1 != nullptr && list2 != nullptr)
        {
            cout << list1 << "++++++++++++++" << list2 << endl;
            if (list1 == nullptr)
            {
                tmp->next = list2;
                list2 = list2->next;
            }
            else if (list2 == nullptr)
            {
                tmp->next = list1;
                list1 = list1->next;
            }
            else
            {
                cout << list1->val << "--------------------" << list2->val << endl;
                if (list1->val > list2->val)
                {
                    tmp->next = list1;
                    list1 = list1->next;
                }
                else
                {
                    tmp->next = list2;
                    list2 = list2->next;
                }
            }
            cout << "----------------------"  << endl;
            tmp = tmp->next;
        }
        return head->next;
    }
};
// @lc code=end

