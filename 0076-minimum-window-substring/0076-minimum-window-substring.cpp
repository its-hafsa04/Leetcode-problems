class Solution {
public:
    string minWindow(string s, string t) {
       if (s.empty() || t.empty()) {
        return "";
    }
    unordered_map<char, int> t_freq;
    for (char c : t) {
        t_freq[c]++;
    }
    int left = 0, right = 0;
    int min_len = INT_MAX;
    int start = 0;
    int count = 0;
    while (right < s.size()) {
        char c = s[right];
        if (t_freq.count(c) > 0) {
            t_freq[c]--;
            if (t_freq[c] >= 0) {
                count++;
            } 
        }
        right++;
        while (count == t.size()) {
            if (right - left < min_len) {
                min_len = right - left;
                start = left;
            }
            char c = s[left];
            if (t_freq.count(c) > 0) {
                t_freq[c]++;
                if (t_freq[c] > 0) {
                    count--;
                }
            }
            left++;
        }
    }
    return min_len == INT_MAX ? "" : s.substr(start, min_len);
    }
};