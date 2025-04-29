class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int cnt = 0, ans = 0;
        int maxN = *max_element(nums.begin(), nums.end());
        int left = 0, n = nums.size();

        for (int right = 0; right < n; ++right) {
            if (nums[right] == maxN)
                cnt++;
            while (cnt >= k) {
                ans += n - right;
                if (nums[left] == maxN)
                    cnt--;
                left++;
            }
        }
        return ans;
    }
};