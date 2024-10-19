class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
         int i=0,j=0,ans=0,count=0,n=nums.size();
        while(j<n)
        {
            count+=nums[j++]==0;
            if(count>k)
            count-=nums[i++]==0;
            ans=max(ans,j-i);
        }    
        return ans;
    }
};