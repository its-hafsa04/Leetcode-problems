#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndices;
        vector<int> result;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numIndices.find(complement) != numIndices.end()) {
                result.push_back(numIndices[complement]);
                result.push_back(i);
                break;
            }
            numIndices[nums[i]] = i;
        }

        return result;
    }
};
