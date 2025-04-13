class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 and nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
