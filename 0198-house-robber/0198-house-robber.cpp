class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int p1=0,p2=0;
        for(int i=0;i<n;i++)
        {
            int temp=max(p1,p2+nums[i]);
            p2=p1;
            p1=temp;
        }
        return p1;
    }
};