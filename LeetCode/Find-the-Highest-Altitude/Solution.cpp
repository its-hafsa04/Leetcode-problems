1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int prev = 0;
5        int max = 0;
6        for (auto x : gain) {
7            prev += x;
8            if (prev > max) {
9             max = prev ;
10            }
11        }
12        return max;
13    }
14};