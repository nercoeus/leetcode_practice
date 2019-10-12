/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */

// @lc code=start
class Solution {
public:
    string addBinary(string a, string b) {
        string res ="";
        if(a.size()<b.size()){
            string c = a;
            a = b;
            b = c;
        }
        int o = 0;
        for(int i= b.size()-1,j = a.size()-1;i>=0;i--,j--){
            int t = o + a[j]-'0'+b[i]-'0';
            if(t == 1 || t== 3){
                res = "1" + res;
                o=(t-1)/2;
            } else{
                res = "0" + res;
                o=t/2;
            }
        }
        for(int i = a.size()-b.size()-1;i>=0;i--){
            int t = o + a[i]-'0';
            if(t == 1 || t== 3){
                res = "1" + res;
                o=(t-1)/2;
            } else{
                res = "0" + res;
                o=t/2;
            }
        }
        o==0? res = res : res  = '1' + res;
        return res;
    }
};
// @lc code=end

