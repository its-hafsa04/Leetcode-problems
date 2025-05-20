class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
       stack<int> st;
        vector<int> res(temp.size(), 0);

        for (int i = 0; i < temp.size(); i++) {
            while (!st.empty() && temp[i] > temp[st.top()]) {
                int idx = st.top(); st.pop();
                res[idx] = i - idx;
            }
            st.push(i);
        }

        return res;  
    }
};