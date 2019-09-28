/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
#include<string>
#include<iostream>
#include<stack>
#include<map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        map<char,char> o{
            {')','('},
            {']','['},
            {'}','{'},
        };
        stack<char> t;
        for(int i = 0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '{'  || s[i] == '[' ){
                t.push(s[i]);
            }
            else{
                if (t.empty() || o.count(s[i])==0 || o[s[i]] != t.top()){
                    return false;
                }
                t.pop();
            }
        }
        return t.empty();
    }
};
// int main(){
//     Solution* k = new Solution;
//     cout<<k->isValid("()")<<endl;
//     delete k;
//     return 0;
// }

