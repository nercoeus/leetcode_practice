/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(int x)
    {
        long flag = 1, res = 0;
        long x2 = x;
        if (x2 < 0)
        {
            x2 = -x2;
            flag = -1;
        }
        while (x2 >= 10)
        {
            res = res * 10 + x2 % 10;
            x2 /= 10;
            cout << res << " " << x2 << endl;
        }
        if (x2 != 0)
        {
            cout << res << " " << x2 << endl;
            res = res * 10 + x2;
            cout << res << " " << x2 << endl;
        }
        if (res * flag >= 2147483647 || res * flag <= -2147483648)
            return 0;
        else
            return res * flag;
    }
};

int main(){
    Solution* k = new Solution;
    cout<<k->reverse(10)<<endl;
    return 0;
}
