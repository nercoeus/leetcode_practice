/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */

// @lc code=start
#include<set>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> k;
        for(int i = 0;i<nums.size();i++){
            k.insert(nums[i]);
        }
        if(nums.size() == k.size()){
            return false;
        }
        return true;
    }
};
// @lc code=end

