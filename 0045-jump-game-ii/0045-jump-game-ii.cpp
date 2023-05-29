class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0,n=nums.size();
        int currFar=0,currEnd=0;
        for(int i=0;i<n-1;i++)
        {
            currFar=max(currFar,i+nums[i]);
            
            if(i==currEnd)
            {
                ans++;
                currEnd=currFar;
            }
        }
        return ans;
    }
};