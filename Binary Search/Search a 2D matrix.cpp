class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int m = matrix.size();
        int n = matrix[0].size();
        int r = m*n-1;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            int i = mid/n;
            int j = mid%n;
            if(matrix[i][j]==target)
            return true;
            else if(matrix[i][j]>target)
            r = mid-1;
            else 
            l = mid+1;
        }
        return false;
    }
};