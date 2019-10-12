/*
 * @lc app=leetcode.cn id=38 lang=cpp
 *
 * [38] 报数
 */

// @lc code=start
#include <string>
#include <iostream>
using namespace std;

class Solution
{
public:
    string kkk(string s)
    {
        string res = "";
        int num = 1;
        int k = s[0] - '0';

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] - '0' == k)
            {
                num++;
            }
            else
            {
                res += to_string(num);
                res += to_string(k);
                k = s[i] - '0';
                num = 1;
            }
        }
        res += to_string(num);
        res += to_string(k);
        return res;
    }
    string countAndSay(int n)
    {
        string res = "1";
        for (int i = 1; i < n; i++)
        {
            res = kkk(res);
        }
        return res;
    }
};

// int main(){
//     Solution* k = new Solution();
//     cout<<k->countAndSay(10)<<endl;
//     return 0;
// }
// @lc code=end
