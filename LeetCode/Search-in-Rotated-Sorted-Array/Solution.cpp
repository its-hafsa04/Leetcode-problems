class Solution {
public:
    int findPivot(vector<int>& v){
        int s=0,e=v.size()-1;
        while(s<e){
            int mid = s+(e-s)/2;
            if(mid+1 < v.size() && v[mid+1]<v[mid]) return mid;
            if(mid-1 >= 0 && v[mid-1] > v[mid]) return mid-1;
            if(v[s] >= v[mid]) e=mid-1;
            else s=mid+1;
        }
        return s;
    }

    int binary(vector<int>& v,int s,int e,int t){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(v[mid] == t) return mid;
            else if(v[mid] > t) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int t) {
        int pivotIdx = findPivot(nums);
        cout << pivotIdx << "  " << endl;
        if(pivotIdx==-1) return -1;
        //cout << pivotIdx << "  " << nums[pivotIdx] << endl;
        // return -1;
        if(nums[0]<=t && nums[pivotIdx]>=t){
            return binary(nums,0,pivotIdx,t);
        }else{
            return binary(nums,pivotIdx+1,nums.size()-1,t);
        }
        return -1;
    }
};