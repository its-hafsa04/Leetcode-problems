class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 and nums[i] == nums[i - 1])
                continue;
            for (int j = i ; j < n; j++) {
                if (j > (i + 1) and nums[j] == nums[j - 1])
                    continue;
                int start = j + 1;
                int end = n - 1;
                while (start < end) {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[start];
                    sum += nums[end];
                    if (sum == target) {
                        ans.push_back(
                            {nums[i], nums[j], nums[start], nums[end]});
                        int low = nums[start];
                        int high = nums[end];
                        start++, end--;
                        while (start < end and nums[start] == low)
                            start++;
                        while (start < end and nums[end] == high)
                            end--;
                    } else if (sum > target)
                        end--;
                    else
                        start++;
                }
            }
        }
        return ans;
    }
};