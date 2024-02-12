class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-n/2;i++)
        {
            if(nums[i]==nums[i+n/2])
                return nums[i];
        }
        return -1;
    }
};