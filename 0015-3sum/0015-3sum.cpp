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
                if (nums[i] + nums[l] + nums[h] < 0) {
                    l++;
                } else if (nums[i] + nums[l] + nums[h] > 0) {
                    h--;
                } else {
                    set.insert({nums[i], nums[l], nums[h]});
                    l++, h--;
                }
            }
        }
        for (auto i : set) {
            res.push_back(i);
        }
        return res;
    }
};