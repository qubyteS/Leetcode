class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        // check for the base cases
        if(matrix.size() == 0) return false;
        
        // get row and column
        int row = matrix.size();
        int col = matrix[0].size();
        
        // do a binary search
        int low = 0;
        int high = row*col - 1;
        
        while(low<=high) {
            int mid = low + (high - low) / 2;
            int mid_ele = matrix[mid/col][mid%col];
            if(mid_ele == target) return true;
            if(mid_ele > target) {
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return false;
    }
};