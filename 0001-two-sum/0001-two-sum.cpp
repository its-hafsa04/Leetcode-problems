#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> mp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            int s = target - nums[i];
            if (mp.find(s) != mp.end()) {
                ans.push_back(mp[s]);
                ans.push_back(i);
                break;
            }
            mp[nums[i]] = i;
        }
        return ans;
    }
};
