/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
#include<iostream>
#include<vector>
using namespace std;
// @lc code=start
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int i = 0,j = nums.size()-1;
        if (nums[j] < target){
            return j+1;
        }
        while(i<j-1){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                return mid;
            }
            else{
                nums[mid] > target ? j= mid:i=mid;
            }
        }
        return nums[i]<target?i+1:i;
    }
};
// @lc code=end

