class Solution {
public:
    bool isAnagram(string s, string t) {
       sort(s.begin(), s.end());  //built-in function
       sort(t.begin(), t.end());
       return s = t;
    }
};