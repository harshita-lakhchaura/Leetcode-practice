class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>triplets;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++)
        {
            vector<int>res;
            if(nums[i+1]-nums[i]<=k && nums[i+2]-nums[i]<=k && nums[i+2]-nums[i+1]<=k)
            {
                res.push_back(nums[i+1]);
                res.push_back(nums[i]);
                res.push_back(nums[i+2]);
                triplets.push_back(res);
                i+=2;
            }
        }
        if(triplets.size()*3!=n)
            triplets.clear();
        return triplets;
    }
};