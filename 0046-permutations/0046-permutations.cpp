class Solution {
public:
    vector<vector<int>>ans;
    void solve(vector<int>& a, int idx)
    {
        if(idx>=a.size())
        {
            ans.push_back(a);
            return;
        }
        for(int i=idx;i<a.size();i++)
        {
            swap(a[i],a[idx]);
            solve(a,idx+1);
            swap(a[i],a[idx]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};