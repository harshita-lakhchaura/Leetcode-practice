class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) {
        int n=nums.size();
        if (n <= 2)
            return n;

        int ans = 2;
        vector<unordered_map<int, int>> dp(n);
        for(int r=0;r<n;r++)
        {
            for(int l=0;l<r;l++)
            {
                int d=nums[r]-nums[l];
                dp[r][d]=dp[l].count(d)?dp[l][d]+1:2;
                ans=max(ans,dp[r][d]);
            }
        }
        return ans;
    }
};