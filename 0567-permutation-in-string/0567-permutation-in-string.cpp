class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        sort(s1.begin(), s1.end());  
        do {
            for(int i = 0; i <= s2.size() - s1.size(); i++) {
                string sub = s2.substr(i, s1.size());
                if(sub == s1) {
                    return true;
                }
            }
        } while(next_permutation(s1.begin(), s1.end()));
        return false;
    }
};