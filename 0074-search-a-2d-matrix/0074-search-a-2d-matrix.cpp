class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size(),i=0;
        while(i<n)
        {
        if(target<=matrix[i][m-1])
        {
            int j=0;
            while(j<m)
            {
                if(target==matrix[i][j])
                return true;
                else if(target<matrix[i][j])
                return false;
                else
                j++;
            }
            return false;
        }
        i++;
        }
               
    return false;
    }
};