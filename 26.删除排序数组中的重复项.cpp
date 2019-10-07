/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,j = 0;
        if(nums.size()<2){
            return nums.size();
        }
        for(j=1;j<nums.size();j++){
            if(nums[j] != nums[k]){
                nums[k+1] = nums[j];
                k++;
            }
        }
        return k+1;
    }
};
// @lc code=end

