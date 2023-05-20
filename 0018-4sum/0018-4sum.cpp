class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long int i,j;
        unordered_map<long long int,vector<pair<long long int,long long int>>>m;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                m[nums[i]+nums[j]].push_back(make_pair(i,j));
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            for(j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                long long int sum=(long long int)target-nums[i]-nums[j];
                   
                if(m.find(sum)!=m.end())
                {
                    for(auto it:m[sum])
                    {
                        long long int k=it.first;
                        long long int l=it.second;
                        if(k>j)
                        {
                            if(!ans.empty() && ans.back()[0]==nums[i] && ans.back()[2]==nums[k] && ans.back()[1]==nums[j] && ans.back()[3]==nums[l])
                                continue;
                            vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }
        return ans;
    }
};