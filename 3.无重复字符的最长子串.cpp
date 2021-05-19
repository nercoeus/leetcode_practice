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
        int low = -1;
        int res = 0;
        for(int i = 0;i<s.size();i++) {
            if(dict[s[i]] > low) {
                low = dict[s[i]];
            }
            dict[s[i]] = i;
            res = max(res, i-low);
        }
        return res;
    }
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int low = 0;
        int max = 0;
        for(int i = 0;i<size;i++) {
            int j = 0;
            for(j = low; j < i;j++) {
                if (s[j] == s[i]) {
                    low = j+1;
                    break;
                }
            }
            if(i-low+1 > max) {
                max = i-low+1;
            }
        }
        return max;
    }
};
// @lc code=end

