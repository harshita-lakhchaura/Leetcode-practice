class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int sum=0;
                int cnt=0;
                for(int x=i-1;x<=i+1;x++)
                {
                    for(int y=j-1;y<=j+1;y++)
                    {
                        if (0 <= x && x < n && 0 <= y && y < m) {
                        sum+=img[x][y];
                        cnt++;
                        }
                    }
                }
                ans[i][j]=sum/cnt;
            }
        }
        return ans;
    }
};