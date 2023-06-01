class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>v;
        int f=0;
        for(int i=0;i<n;i++)
        {
            f=0;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    f=1;
                    v.push_back(j);
                }
            }
            if(f==1)
                fill(matrix[i].begin(),matrix[i].end(),0);
        }
        for(int i=0;i<n;i++)
        {
            for(auto x:v)
                matrix[i][x]=0;
        }
    }
};