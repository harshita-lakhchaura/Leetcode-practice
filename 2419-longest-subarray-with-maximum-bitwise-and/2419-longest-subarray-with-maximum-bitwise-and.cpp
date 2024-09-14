class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int maxLength=0, maxAnd=0, curr=0;
        for(int i=0;i<n;i++)
        {
            if(maxAnd<nums[i])
            {
                maxAnd=nums[i];
                maxLength=0;
                curr=0;
            }
            if(maxAnd==nums[i])
                curr+=1;
            if(maxAnd!=nums[i])
                curr=0;
            maxLength=max(maxLength, curr);
        }
        return maxLength;
    }
};