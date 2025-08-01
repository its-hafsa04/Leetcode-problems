class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int cnt = 0, r = nums.size() - 1;
        for (int l = 0; l < r;) {
            if (nums[l] + nums[r] < target) {
                cnt += r - l;
                l++;
            } else {
                r--;
            }
        }
        return cnt;
    }
};