class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int l=0,h=n;
        while(l<h)
        {
            int m=(l+h)/2;
            if(nums[m]==target)
                return true;
            else if(nums[m]>target)
                h=m;
            else
                l=m+1;
        }
        return false;
    }
};