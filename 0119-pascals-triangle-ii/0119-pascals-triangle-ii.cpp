class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(1, 1);
        long long pre = 1;
        for (int i = 1; i <= rowIndex; i++) {
            long long next = pre * (rowIndex - i + 1) / i;
            res.push_back(next);
            pre = next;
        }
        return res;
    }
};