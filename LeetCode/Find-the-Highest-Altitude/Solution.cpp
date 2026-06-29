1class Solution {
2public:
3    int largestAltitude(vector<int>& gain) {
4        int answer = 0;
5        int current = 0;
6        for (int i = 0; i < gain.size(); i++) {
7            current += gain[i];
8            answer = max(answer, current);
9        }
10        return answer;
11    }
12};