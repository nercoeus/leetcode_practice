/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size();
        while(--i>0&&nums[i-1]>=nums[i]);
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        int j=nums.size();
        while(--j>=i&&nums[i-1]>=nums[j]);
        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};
// @lc code=end

