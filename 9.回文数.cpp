/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
#include<string>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        string res = to_string(x);
        for(int i = 0,j=res.length()-1;i<j;i++,j--){
            if(res[i] != res[j]){
                return false;
            }
        }
        return true;
    }
};

