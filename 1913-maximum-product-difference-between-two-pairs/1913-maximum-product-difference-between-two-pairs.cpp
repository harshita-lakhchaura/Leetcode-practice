class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int mx1=*max_element(nums.begin(),nums.end());
        int mn1=*min_element(nums.begin(),nums.end());
        if(count(nums.begin(),nums.end(),mx1)==1)
        nums.erase(remove(nums.begin(),nums.end(),mx1),nums.end());
        if(count(nums.begin(),nums.end(),mn1)==1)
        nums.erase(remove(nums.begin(),nums.end(),mn1),nums.end());
        int mx2=*max_element(nums.begin(),nums.end());
        int mn2=*min_element(nums.begin(),nums.end());
        return (mx1*mx2)-(mn1*mn2);
    }
};