class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        for (int num : nums) {
            cnt[num]++;
        }
        vector<pair<int, int>> sorted(cnt.begin(), cnt.end());
        sort(sorted.begin(), sorted.end(),
             [](const pair<int, int>& a, const pair<int, int>& b) {
                 return a.second > b.second;
             });
        vector<int> res;
        for (int i = 0; i < k && i < sorted.size(); ++i) {
            res.push_back(sorted[i].first);
        }
        return res
    }
};