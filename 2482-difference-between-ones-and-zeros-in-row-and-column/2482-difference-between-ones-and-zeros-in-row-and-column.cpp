class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>oneRow;
        vector<int>oneCol;
        vector<int>zeroRow;
        vector<int>zeroCol;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        int z=0,o=0;
        for(int i=0;i<n;i++)
        {
            z=0,o=0;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                    o++;
                else
                    z++;
            }
            oneRow.push_back(o);
            zeroRow.push_back(z);
        }
        for(int i=0;i<m;i++)
        {
            z=0,o=0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==1)
                    o++;
                else
                    z++;
            }
            oneCol.push_back(o);
            zeroCol.push_back(z);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans[i][j]=oneRow[i]+oneCol[j]-zeroRow[i]-zeroCol[j];
            }
        }
        return ans;
    }
};