1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        if(haystack.size()<needle.size()){
5            return -1;
6        }
7        for(int i=0; i<= haystack.size() - needle.size(); i++){
8            if(haystack.substr(i, needle.size()) == needle){
9                return i;
10            }
11        }
12        return -1;
13    }
14};