// 141. 环形链表 https://leetcode-cn.com/problems/linked-list-cycle/

#include<iostream>
#include<assert.h>
#include<vector>
#include <utility>
#include <unordered_set>
#include<cctype>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
     };
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


// !!! 执行用例:  []   -1 一直出错，不知道为什么

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next)
        {
            false; 
        }

        ListNode* slow = head;
        ListNode* quick = head->next;

        while (slow != quick)
        {
            if (!quick->next || !quick->next->next)
            {
                return false;
            }

            slow = slow->next;
            quick = quick->next->next;
        }
        return true;
    }
};