/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int> result;
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                result.push_back(i);
                result.push_back(j);
                break;
            }
        }
    }
    return result;
}
};
int main(){
    Solution* s = new Solution();
    vector<int> v = {7, 5, 16, 8};
    vector<int> res = s->twoSum(v, 13);
    for(int n : res) {
        std::cout << n << '\n';
    }
    return 0;
}
