class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = 0;
        unordered_map<int, int> m;
        for (int a : nums) {
            if (a < k)
                return -1;
            m[a]++;
            if (a != k && m[a] == 1)
