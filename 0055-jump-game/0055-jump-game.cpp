class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int currFar=0;
        if(n==1)
            return true;
        if(nums[0]==0)
            return false;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==0 && currFar==i)
                return false;
            currFar=max(currFar,i+nums[i]);
        }
        return true;
    }
};