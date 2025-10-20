class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        map<int,int> hmap;
        int left = 0;
        int right = 0;
        long long count = 0;
        while(right < nums.size()){
            hmap[nums[right]]++;

            while(hmap.rbegin()->first - hmap.begin()->first > 2){
                hmap[nums[left]]--;
                if(hmap[nums[left]] == 0){
                    hmap.erase(nums[left]);
                }
                left++;
            }
            count += right-left+1;
            right++;
        }
        return count;
    }
};