class Solution {
public:
    
    bool possible(vector<int>& nums, int threshold,int div)
    {
        int sum=0;
        for(int i:nums)
        {
            sum+=ceil(1.0*i/div);
        }
        return sum<=threshold;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int l=1,r=*max_element(nums.begin(),nums.end());
        int ans=0;
        
        while(l<=r)
        {
            int m=(l+r)/2;
            if(possible(nums,threshold,m))
            {
                ans=m;
                r=m-1;
            }
            else
                l=m+1;
        }
        return ans;
    }
};