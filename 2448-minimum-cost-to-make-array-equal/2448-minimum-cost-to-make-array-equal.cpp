class Solution {
public:
    
    long long Cost(vector<int>& nums, vector<int>& cost, int base) {
        long long result=0;
        for(int i=0;i<nums.size();i++)
        {
            result+=1L*abs(nums[i]-base)*cost[i];
        }
        return result;
    }
        
    long long minCost(vector<int>& nums, vector<int>& cost) {
        long long ans = Cost(nums, cost, nums[0]);
        int left = *min_element(nums.begin(), nums.end());
        int right = *max_element(nums.begin(), nums.end());
        
        while(left<right)
        {
            int mid=(left+right)/2;
            long long c1=Cost(nums,cost,mid);            
            long long c2=Cost(nums,cost,mid+1);
            ans=min(c1,c2);
            if(c1>c2)
                left=mid+1;
            else
                right=mid;
        }
        return ans;
    }
};