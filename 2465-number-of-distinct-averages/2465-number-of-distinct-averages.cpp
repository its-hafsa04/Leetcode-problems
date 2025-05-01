class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<double> av;
        int l=0,r=nums.size()-1;
        while(l<r){
            double avg=(nums[l]+nums[r])/2;
            av.insert(avg);
            l++;
            r--;
        }
        return av.size();
    }
};