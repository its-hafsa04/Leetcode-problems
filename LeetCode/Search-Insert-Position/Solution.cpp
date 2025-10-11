class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int size = nums.size();
        
        int ans;
        int left = 0; int right = size-1;
        while(left <= right){
            
            int mid = left + (right - left)/2;
            if(nums[mid] >= target){
                right = mid-1;
                ans = mid;
            } 
            else left = mid+1;
        }
        return ans;
    }
};