class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        nums.push_back(0);
        int n=nums.size();
        int one=0;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
                one++;
            else
            {
                v.push_back(one);
                one=0;
            }
        }
        int ans=-1;
        for(int i=1;i<v.size();i++)
        {
            int sum=v[i-1]+v[i];
            ans=max(sum,ans);
        }
        if(ans==-1)
            ans=n-2;
        return ans;
    }
};