/* 
 * 剑指 Offer 06
 * 从头到尾打印链表
 * [来源]https://leetcode-cn.com/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof/
 * @CopyRight 彭郑威
 */

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution1 {
public:
    vector<int> reversePrint(ListNode* head) {
        int count = 0;
        ListNode* headt = head;
        while(head){
            count++;
            head = head->next;
        }
        vector<int> v(count);
        while(headt){
            v[count-1] = headt->val;
            count--;
            headt = headt->next;
        }
        return v;
    }
};

class Solution2 {
    public:
    vector<int> reversePrint(ListNode* head) {
        vector<int> res;
        if(head==NULL)
            return res;
        stack<int> t;
        while(head!=NULL){
            t.push(head->val);
            head = head->next;
        }
        while(!t.empty()){
            res.push_back(t.top());
            t.pop();
        }
        return res;
    }
};