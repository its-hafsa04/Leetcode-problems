1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        int a, b = 1;
5        for (a = 1; a < nums.size(); a++) {
6            if (nums[a] != nums[a - 1]) {
7                nums[b] = nums[a];
8                b++;
9            }
10        }
11        return b;
12    }
13};