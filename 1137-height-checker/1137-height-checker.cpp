class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        int count = 0;
        int i = 0;
        int j = 0;
        while (i < heights.size() && j < expected.size()) {

            if (heights[i] != expected[j]) {
                count++;
            }
            i++;
            j++;
        }
        return count;
    }
};