class Solution {
public:
    bool isIsomorphic(string s, string t) {
     if(s.size()!=t.size())
         return false;
        int s_map[256] = {0};
        int t_map[256] = {0};
        for(int i=0;i<s.size();++i){
            if(s_map[s[i]] == 0 && t_map[t[i]]==0){
                s_map[s[i]]=t[i];
                t_map[t[i]] = s[i];
            }else{
                if(s_map[s[i]] != t[i] || t_map[t[i]] !=s[i])
                    return false;
            }
        }
        return true;
    }
};