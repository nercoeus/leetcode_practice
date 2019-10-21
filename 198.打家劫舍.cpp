/*
 * @lc app=leetcode.cn id=198 lang=cpp
 *
 * [198] 打家劫舍
 */

// @lc code=start
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int s = nums.size()-1;
        vector<int> max(nums.size());
        max[0] = nums[0];
        for(int i = 1;i<nums.size();i++){
            int t;
            if(i == 1){
                t = 0;
            } else{
                t = max[i-2];
            }
            max[i] = std::max(max[i-1], nums[i] + t);
        }
        return max[nums.size()-1];
    }
};
// @lc code=end

