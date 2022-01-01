/* 
 * 剑指 Offer 09
 * 用两个栈实现队列
 * [来源]https://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof/
 * @CopyRight 彭郑威
 */

#include<iostream>
#include<stack>
using namespace std;

class CQueue {
public:
    CQueue() {
        
    }
    
    void appendTail(int value) {
        insert.push(value);
    }
    
    int deleteHead() {
        if(!del.empty()){
            int res = del.top();
            del.pop();
            return res;
        }
        else{
            if(insert.empty()) // 没有元素
                return -1;
            while(!insert.empty()){
                int temp = insert.top();
                insert.pop();
                del.push(temp);
            }
            int res = del.top();
            del.pop();
            return res;
        }
    }
    stack<int> insert;  // 插入栈
    stack<int> del;  // 删除栈

};
