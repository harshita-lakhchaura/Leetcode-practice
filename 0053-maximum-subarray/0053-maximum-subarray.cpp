class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN,sum=0;
        int j=0;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(sum>ans)
                ans=sum;
            if(sum<0)
                sum=0;
            j++;
        }
        return ans;
    }
};