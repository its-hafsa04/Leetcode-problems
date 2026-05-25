1class Solution {
2public:
3    int romanToInt(string s) {
4        unordered_map<char,int> m;
5        m['I'] = 1;
6        m['V'] =5;
7        m['X'] =10;
8        m['L']=50;
9        m['C']=100;
10        m['D']=500;
11        m['M']=1000;
12        int ans=0;
13        for(int i=0;i<s.size();i++){
14            if(m[s[i]]< m[s[i+1]]){
15                ans-=m[s[i]];
16            }else{
17                ans+=m[s[i]];
18            }
19        }
20        return ans;
21    }
22};