class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1;
        int lmx=0, rmx=0;
        int total=0;
        while(l<r){
            lmx=max(lmx, height[l]);
            rmx=max(rmx, height[r]);
            total += (lmx<rmx) ? lmx - height[l++] : rmx - height[r--]; 
           if(lmx<rmx){
            total +=lmx - height[l++];
           }else{
            total += rmx - height[r--];
           }
       }
       return total;
    }
};