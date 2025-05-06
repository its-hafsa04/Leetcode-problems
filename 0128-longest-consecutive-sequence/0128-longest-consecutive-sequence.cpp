class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> set(nums.begin(),nums.end());
        int lg = 0;
        for(int num:set){
            if(set.find(num-1)==set.end()){
                int l=1;
                while(set.find(num+l)!=set.end())
                l++;
                lg=max(lg,l);
            }
        }
        return lg; 
    }
};