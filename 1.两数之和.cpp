/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0;i<n;i++) {
            for(int j = i+1;j<n;j++) {
                if(nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
    vector<int> twoSumUseMap(vector<int>& nums, int target) {
        map<int, int> temp;
        for(int i = 0;i<nums.size();i++) {
            if(temp.find(target - nums[i]) != temp.end()) {
                return {i, temp[target - nums[i]]};
            }
            temp[nums[i]] = i;
        }
        return {};
    }
};
