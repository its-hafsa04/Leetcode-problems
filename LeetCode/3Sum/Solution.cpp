class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> set;
        for (int i = 0; i < n - 2; i++) {
            int l = i + 1, h = n - 1;
            while (l < h) {
