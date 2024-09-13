class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans;
        int n=arr.size();
        int m=queries.size();
        vector<int>pre(n);
        pre[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            pre[i]=pre[i-1]^arr[i];
        }
        for(int i=0;i<m;i++)
        {
            int l=queries[i][0];
            int r=queries[i][1];
            if(l==0)
                ans.push_back(pre[r]);
            else
                ans.push_back(pre[r]^pre[l-1]);
        }
        return ans;
    }
};