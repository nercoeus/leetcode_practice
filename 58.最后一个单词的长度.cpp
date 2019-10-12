/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int res = 0;
        int l = s.size()-1;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i] == ' '){
                l = i-1;
            } else{
                break;
            }
        }
        for(int i = l;i>=0;i--){
            if(s[i] == ' '){
                break;
            } else{
                res++;
            }
        }
        return res;
    }
};
// @lc code=end

