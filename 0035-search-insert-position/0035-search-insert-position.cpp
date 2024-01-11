class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int l=0, u=nums.size()-1;
        while(l<=u)
        {
            int mid=(l+u)/2;
            if(target==nums[mid])
            return mid;
            else if(target<nums[mid])
            {
                u=mid-1;  
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};