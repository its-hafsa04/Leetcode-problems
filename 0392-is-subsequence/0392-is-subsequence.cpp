class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sIndex = 0;
        for(char ch: t){
            if(s[sIndex] == ch){
                sIndex++;
            }
            if(sIndex==s.size()){
                return true;
            }
        }
        return sIndex== s.size();
    }
};