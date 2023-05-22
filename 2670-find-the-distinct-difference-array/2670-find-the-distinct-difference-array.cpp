class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int>diff;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            set<int>s1;
            set<int>s2;
            for(int j=0;j<=i;j++)
                s1.insert(nums[j]);
            for(int k=i+1;k<n;k++)
                s2.insert(nums[k]);
            diff.push_back(s1.size()-s2.size());
        }
        return diff;
    }
};