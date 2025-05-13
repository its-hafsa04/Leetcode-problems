class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0, i = 0, j = 0, maxfreq = INT_MIN, maxlen = 0;
        vector<int> ar(26);
        while (j, n) {
            ar[s[j] - 'A']++;
            maxfreq = max(maxfreq, ar[s[j] - 'A']);
            while ((j - i + 1) - maxfreq > k) {
                ar[s[i] - 'A']--;
                i++;
            }
            maxlen = max(maxlen, j - i + 1);
            j++;
        }
        return maxlen;
    }
};