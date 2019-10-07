/*
 * @lc app=leetcode.cn id=28 lang=cpp
 *
 * [28] 实现 strStr()
 */
#include<string>
using namespace std;
// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "" ){
            return 0;
        }
        if (haystack.size()<needle.size()){
            return -1;
        }
        bool t = true;
        for(int i = 0;i<=haystack.size()-needle.size();i++){
            t = true;
            for(int j=0;t&&j<needle.size();j++){
                if(haystack[i+j] ==  needle[j]){
                    if (j == needle.size()-1){
                        return i;
                    }
                } else{
                    t = false;
                }
            }
        }
        return -1;
    }
};
// @lc code=end

