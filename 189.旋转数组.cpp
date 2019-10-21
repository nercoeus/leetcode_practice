/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k%nums.size())
        {
            reverse(nums.begin(),nums.end());
            reverse(nums.begin(),nums.begin()+k%nums.size());
            reverse(nums.begin()+k%nums.size(),nums.end());
        }
    }
};
// @lc code=end

