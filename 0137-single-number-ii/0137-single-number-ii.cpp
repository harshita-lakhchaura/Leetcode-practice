class Solution {
public:
    int singleNumber(vector<int>& nums) {
        long long int n=nums.size();
        long long int ans=0;
        set<long long int>s;
        long long int sum1=0;
        for(long long int i=0;i<n;i++)
        {
            sum1+=nums[i];
            s.insert(nums[i]);
        }
        long long int sum2=0;
        for(auto i:s)
            sum2+=i;
        ans=((3*sum2)-sum1)/2;
        return ans;
    }
};