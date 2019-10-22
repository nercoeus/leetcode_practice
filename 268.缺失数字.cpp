/*
 * @lc app=leetcode.cn id=268 lang=cpp
 *
 * [268] 缺失数字
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        nums.insert(nums.end(), -1);
        int i = 0;
        while(i<nums.size()){
            if(nums[i] == i || nums[i] == -1){
                i++;
                continue;
            }
            int k = nums[i];
            int t = nums[k];
            nums[k] = k;
            nums[i] = t;
            if(t == -1){
                i++;
            }
        }
        for(int j = 0;j<nums.size();j++){
            if(nums[j] == -1) return j;
        }
        return 0;
    }
};
// @lc code=end

