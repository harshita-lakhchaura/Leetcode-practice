class Solution {
public:
    
    int solve(int ind, vector<int>& nums, vector<int>& dp)
    {
        if(ind==0) return nums[ind];
        if(ind<0) return 0;
        if(dp[ind]!=-1) return dp[ind];
        int pick=nums[ind]+solve(ind-2, nums, dp);
        int notPick=0+solve(ind-1, nums, dp);
        return dp[ind]=max(pick, notPick);
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        vector<int> temp1,temp2;
        for(int i=0;i<nums.size()-1;i++)
        {
            temp1.push_back(nums[i]);
        }
        for(int i=1;i<nums.size();i++)
        {
            temp2.push_back(nums[i]);
        }
        int ans1,ans2;
        int n1=temp1.size();
        int n2=temp2.size();
        vector<int>dp1(n1,-1);
        ans1=solve(n1-1,temp1,dp1);
        vector<int>dp2(n2,-1);
        ans2=solve(n2-1,temp2,dp2);
        return max(ans1,ans2);
    }
};