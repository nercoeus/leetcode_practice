/*
 * @lc app=leetcode.cn id=13 lang=cpp
 *
 * [13] 罗马数字转整数
 */
#include <string>
#include <map>
using namespace std;
class Solution
{
public:
    int romanToInt(string s)
    {
        map<char, int> t {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}};

        int res = 0;
        for(int i = 0;i<s.length();i++){
            if(i+1<s.length() && t[s[i]] < t[s[i+1]]){
                res += t[s[i+1]] - t[s[i]];
                i++;
            } else{
                res += t[s[i]];
            }
        }
        return res;
    }
};
