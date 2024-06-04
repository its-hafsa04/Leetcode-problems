class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double curSum = 0, maxSum = 0;
        for(int i=0; i<k;i++){
            curSum += nums[i];
            maxSum = curSum;
        }
        for(int i=k; i<nums.size(); i++){
            curSum+= nums[i] - nums[i-k];
            maxSum = max(maxSum, curSum);
        }
        return maxSum/k;
    }
};