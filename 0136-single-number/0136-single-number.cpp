class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        set<int>s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
            sum+=nums[i];
        }
        int sumUnique=0;
        for(auto i:s)
        {
            sumUnique+=i;
        }
        int ans=2*sumUnique-sum;
        return ans;
    }
};