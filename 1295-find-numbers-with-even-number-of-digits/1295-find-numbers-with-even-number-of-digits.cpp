class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt=0;
        for(int x:nums){
            int dig=0;
            while(x>0){
                dig++;
                x/=10;
            }
            if((dig &1)==0)
            cnt++;
        }
        return cnt;
    }
};