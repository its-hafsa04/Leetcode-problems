1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int i, j = 1;
5        for (i = 1; i < nums.size(); i++) {
6            if (nums[i] != nums[i - 1]) {
7                nums[j] = nums[i];
8                j++;
9            }
10        }
11        return j;
12    }
13};