/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
   public:
    vector<int> plusOne(vector<int>& a) {
        int s = a.size();
        int post = 1;
        for (int i = s - 1; i >= 0; i--) {
            if (post + a[i] > 9) {
                a[i] = (post + a[i]) % 10;
                post = 1;
            } else {
                a[i] = (post + a[i]) % 10;
                post = 0;
            }
        }
        if (post == 1) {
            a.insert(a.begin(), post);
        }
        return a;
    }
};
// @lc code=end
