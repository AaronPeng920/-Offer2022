/* 
 * 剑指 Offer 30
 * 包含 min 函数的栈
 * [来源]https://leetcode-cn.com/problems/bao-han-minhan-shu-de-zhan-lcof/
 * @CopyRight 彭郑威
 */

#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int x) {
        if(minStack.empty()){
            vector<int> temp;
            temp.push_back(x);
            temp.push_back(x);
            minStack.push(temp);
        }
        else if(minStack.top()[1]<=x){
            vector<int> temp;
            temp.push_back(x);
            temp.push_back(minStack.top()[1]);
            minStack.push(temp);
        }
        else{
            vector<int> temp;
            temp.push_back(x);
            temp.push_back(x);
            minStack.push(temp);
        }
    }
    
    void pop() {
        minStack.pop();
    }
    
    int top() {
        return minStack.top()[0];
    }
    
    int min() {
        return minStack.top()[1];
    }
    
private:
    stack<vector<int> > minStack;
};