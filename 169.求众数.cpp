/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        for(int i = 0,j=nums.size()-1;i<=j;){
            if(nums[i] != nums[j]){
                i++;
                j--;
            } else{
                return nums[i];
            }
        }
        return 0;
    }
};
// @lc code=end

