1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if(strs.empty()) return "";
5        string pre = strs[0];
6        for(string s: strs){
7            while(s.find(pre) !=0){
8                pre = pre.substr(0, pre.size() -1);
9            }
10        }
11        return pre;
12    }
13};