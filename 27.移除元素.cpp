/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = nums.size()-1;
        for(int i=0;i<=j;){
            if(nums[i] == val){
                int t = nums[j];
                nums[j] = nums[i];
                nums[i] = t;
                j--;
            } else{
                i++;
            }
        }
        return j+1;
    }
};
// @lc code=end

