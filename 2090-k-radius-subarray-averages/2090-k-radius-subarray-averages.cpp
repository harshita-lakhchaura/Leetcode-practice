class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        if(n<(2*k+1))
        {
         
        for(int i=0;i<n;i++)
            ans.push_back(-1);
            return ans;
        }
        for(int i=0;i<k;i++)
            ans.push_back(-1);
        int m=2*k+1;
        long long int i=0,j=0,sum=0;
        while(j<n)
        {
            sum+=nums[j];
            if(j-i+1<m)
            {
                j++;
            }
            else
            {
                ans.push_back(sum/m);
                sum-=nums[i];
                i++;
                j++;
            }
        }
        for(i=n-k;i<n;i++)
            ans.push_back(-1);
        return ans;
    }
};