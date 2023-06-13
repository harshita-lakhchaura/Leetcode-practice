class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>>tgrid;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                temp.push_back(grid[j][i]);
            }
            cnt+=count(grid.begin(),grid.end(),temp);
            temp.clear();
        }
        return cnt;
    }
};