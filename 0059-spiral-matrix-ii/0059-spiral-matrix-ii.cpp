class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result (n, vector<int>(n));
        int cnt=1;
        for(int i=0;i<(n+1)/2;i++)
        {
            for(int j=i;j<n-i;j++)
               result[i][j]=cnt++;
            for(int j=i+1;j<n-i;j++)
                result[j][n-i-1]=cnt++;
            for(int j=n-i-2;j>=i;j--)
                result[n-i-1][j]=cnt++;
            for(int j=n-i-2;j>i;j--)
                result[j][i]=cnt++;
        }
        return result;
    }
};