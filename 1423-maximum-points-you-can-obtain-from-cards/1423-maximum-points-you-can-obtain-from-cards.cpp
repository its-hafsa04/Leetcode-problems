class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total = 0;
        for (int l = 0; l < k; l++) {
            total += cardPoints[l];
        }
        int best = total; 
        for (int l = k - 1, r = cardPoints.size() - 1; l >= 0; l--, r--) {
            total += cardPoints[r] - cardPoints[l]; 
            best = max(best, total); 
        }
        return best;
    }
};