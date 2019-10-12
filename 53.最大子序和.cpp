/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = 0;
        int res2 = __INT_MAX__ + 1;
        cout<<res2<<endl;
        for(int i = 0;i<nums.size();i++){
            res += nums[i];
            res2 = res>res2?res:res2;
            if (res < 0){
                res = 0;
            }
        }
        return res2;
    }
};
// @lc code=end

