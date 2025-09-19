class Solution {
public:
    string minWindow(string s, string t) {
        if (s.empty() || t.empty()) {
            return "";
        }
        unordered_map<char, int> freq;
        for (char ch : t) {
            freq[ch]++;
        }
        int left = 0, right = 0;
        int min_len = INT_MAX;
        int start = 0;
        int count = 0;
        while (right < s.size()) {
            char ch = s[right];
            if (freq.count(ch) > 0) {
                freq[ch]--;
                if (freq[ch] >= 0) {
                    count++;
                }
            }
            right++;
            while (count == t.size()) {
                if (right - left < min_len) {
                    min_len = right - left;
                    start = left;
                }
                char ch = s[left];
                if (freq.count(ch) > 0) {
                    freq[ch]++;
                    if (freq[ch] > 0) {
                        count--;
                    }
                }
                left++;
            }
        }
        return min_len == INT_MAX ? "" : s.substr(start, min_len);
    }
};