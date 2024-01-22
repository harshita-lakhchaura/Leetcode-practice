class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        set<int>s;
        for(auto i:nums)
        {
            int size=s.size();
            s.insert(i);
            if(s.size()==size)
            ans.push_back(i);
        }
        int prev=0;
        for(auto i:s)
        {
            if(i-prev!=1)
            {
                ans.push_back(i-1);
            }
            prev=i;
        }
        if(ans.size()==1)
            ans.push_back(n);
        return ans;
    }
};