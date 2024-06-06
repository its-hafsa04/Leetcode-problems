class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n= arr.size();
        int l=0, r=n-1;
      while(l<r){
       int mid=(l+r)/2;
       
        if( mid>0 && mid<n && arr[mid]> arr[mid-1] && arr[mid]>arr[mid+1]){
             return mid;
        }
       else if(mid>0 && mid<n-1 && arr[mid]>arr[mid+1]){
             r=mid-1;
        }
        else{
            l=mid+1;
        }
      }
      return l;
    }
};