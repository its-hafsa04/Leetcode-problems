class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if(n==0 || n==1 || n==2){
            return -1;
        }else{
            sort(nums.begin(),nums.end());
            return nums[1];
        }
    }
};