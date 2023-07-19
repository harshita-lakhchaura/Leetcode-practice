class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size()-1,i=0;
        while(i<n && m>=0)
        {
            if(matrix[i][m]==target)
                return true;
            else if(matrix[i][m]>target)
                m--;
            else
                i++;
        }               
    return false;
    }
};