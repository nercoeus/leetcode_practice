/*
 * @lc app=leetcode.cn id=492 lang=cpp
 *
 * [492] 构造矩形
 */

// @lc code=start
#include<vector>
#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> res;
        int q = 0;
        int w = 0;
        int mid = sqrt(area);
        for (int i = 1;i<=mid ;i++){
            if (area%i == 0){
                q  = i;
                w = area/i;
            }
        }
        res.insert(res.begin(),q);
        res.insert(res.begin(),w);
        return res;
    }
};

int main(int argc, char *argv[]){
    cout<<"hrllo"<<endl;
    Solution* kkk = new Solution();
    vector<int> res = kkk->constructRectangle(5);
    cout<<res[0]<<res[1]<<endl;
    return 0;
}
// @lc code=end

