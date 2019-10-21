/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

#include<queue>
using namespace std;
// @lc code=start
class MyStack
{
public:
    queue<int> s;
    /** Initialize your data structure here. */
    MyStack()
    {
    }

    /** Push element x onto stack. */
    void push(int x)
    {
        s.push(x);
        for(int i = 1;i<s.size();i++){
            s.push(s.front());
            s.pop();
        }
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        int res = s.front();
        s.pop();
        return res;
    }

    /** Get the top element. */
    int top()
    {
        return s.front();
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
