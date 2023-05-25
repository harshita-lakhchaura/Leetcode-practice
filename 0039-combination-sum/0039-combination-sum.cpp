class Solution {
public:
    void Sum(vector<int>& candidates, int target, vector<vector<int> >& res, vector<int>& ans, int i)
    {
        if(target==0)
        {
            res.push_back(ans);
            return;
        }
        while(i<candidates.size() && target-candidates[i]>=0)
        {
            ans.push_back(candidates[i]);
            Sum(candidates, target-candidates[i], res,ans,i);
            i++;
            ans.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ans;
        
        sort(candidates.begin(),candidates.end());
        
        candidates.erase(unique(candidates.begin(),candidates.end()),candidates.end());
        
        Sum(candidates,target,res,ans,0);
        
        return res;
    }
};