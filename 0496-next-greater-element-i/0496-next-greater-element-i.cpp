class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res(nums1.size(),-1);
        stack<int>s;
        map<int,int>m;
        for(int i: nums2){
            while(!s.empty() && s.top() < i){
                m[s.top()] = i;
                s.pop();
            }
            s.push(i);
        }
        for(int j=0; j<nums1.size() ; j++){
            if(m[nums1[j]])
            res[j] = m[nums1[j]];
        }
        return res;
}
};