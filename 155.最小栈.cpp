/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
#include<stack>
using namespace std;
class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> m;
    stack<int> val;
    MinStack()
    {
    }

    void push(int x)
    {
        val.push(x);
        int t;
        if (m.empty())
        {
            t = x;
        }
        else
        {
            t = min(m.top(), x);
        }
        m.push(t);
    }

    void pop()
    {
        val.pop();
        m.pop();
    }

    int top()
    {
        return val.top();
    }

    int getMin()
    {
        return m.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
