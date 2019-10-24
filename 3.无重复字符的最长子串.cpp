/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> dict(256, -1);
        int res = 0;
        int s2 = -1;
        for(int i=  0;i<s.size();i++){
            if(dict[s[i]] > s2){
                s2 = dict[s[i]];
            }
            dict[s[i]] = i;
            res = max(res, i-s2);
        }
        return res;
    }
};
// @lc code=end

