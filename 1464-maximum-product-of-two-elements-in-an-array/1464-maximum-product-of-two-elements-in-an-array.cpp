class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1=*max_element(nums.begin(),nums.end());
        int res = count(nums.begin(), nums.end(), mx1);
        if(res>1)
            return (mx1-1)*(mx1-1);
        nums.erase(remove(nums.begin(),nums.end(),mx1),nums.end());
        int mx2=*max_element(nums.begin(),nums.end());
        return (mx1-1)*(mx2-1);
    }
};