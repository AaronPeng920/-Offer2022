/* 
 * 剑指 Offer 024
 * 反转链表
 * [来源]https://leetcode-cn.com/problems/UHnkqh/
 * @CopyRight 彭郑威
 */

#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* last = NULL;
        ListNode* next = head;
        ListNode* res = NULL;
        while(head){
            if(head->next==NULL)
                res = head;
            next = head->next;
            head->next = last;
            last = head;
            head = next;
        }
        return res;
    }
};




