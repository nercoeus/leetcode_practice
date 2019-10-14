/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
        int min = INT_MAX;
        for(int i = 0;i<prices.size();i++){
            if(prices[i] < min){
                min = prices[i];
            }
            res = max(res,prices[i] - min);
        }
        return res;
    }
};
// @lc code=end

