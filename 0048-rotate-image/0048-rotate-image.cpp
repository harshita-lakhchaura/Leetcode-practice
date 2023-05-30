class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            for(int j=0;j<n;j++)
            {
                a.push_back(matrix[j][i]);
            }
            reverse(a.begin(),a.end());
            ans.push_back(a);
        }
        matrix.clear();
        for(auto i:ans)
            matrix.push_back(i);
    }
};