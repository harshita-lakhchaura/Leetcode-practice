class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l=0,h=nums.size()-1;
        while(l<h)
        {
            int m=(l+h)/2;
            if(m%2)
                m--;
            if(nums[m]!=nums[m+1])
                h=m;
            else
                l=m+2;
        }
        return nums[l];
    }
};