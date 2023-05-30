class Solution {
public:
    set<vector<int>>ans;
    void solve(vector<int>& a, int idx)
    {
        if(idx>=a.size())
        {
            ans.insert(a);
            return;
        }
        for(int i=idx;i<a.size();i++)
        {
            swap(a[i],a[idx]);
            solve(a,idx+1);
            swap(a[i],a[idx]);
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums,0);
        vector<vector<int>>res;
        for(auto i:ans)
        {
            res.push_back(i);
        }
        return res;
    }
};