class Solution {
public:
    int fillCups(vector<int>& a) {
        int mx = 0, sum = 0;
        for (int& A : a) {
            mx = max(A, mx);
            sum += A;
        }
        return max(mx, (sum + 1) / 2);
    }
};