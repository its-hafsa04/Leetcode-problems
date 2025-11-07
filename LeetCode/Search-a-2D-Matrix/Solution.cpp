class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int st = 0 , end = n * m - 1;
        
        // Treat the matrix like a 1D array
        while(st <= end){
            int mid = (end - st) / 2 + st;
            // Map mid to 2D index: row = mid/m, col = mid%m
            int search = matrix[mid/m][mid%m];
            if(search == target) return true;
            if(search > target){
                end = mid-1;
            }else st = mid+1;
        }
        return false;
    }
};