/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> k(26, 0);
        vector<int> k1(26, 0);

        for(int i = 0;i<s.size();i++){
            k[s[i]-'a']++;
            k1[t[i]-'a']++;
        }
        for(int i = 0;i<k.size();i++){
            if(k[i] != k1[i]) return false;
        }
        return true;
    }
};

// @lc code=end

