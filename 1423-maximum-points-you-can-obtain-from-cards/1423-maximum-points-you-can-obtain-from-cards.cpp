class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0,size=n-k,ans=0;
        for(int i=0;i<n;i++)
            sum+=cardPoints[i];
        
        if(!size)
            return sum;
        int i=0;
        for(int j=0;j<n;j++)
        {
            sum-=cardPoints[j];
            if(j-i+1==size)
            {
                ans=max(ans,sum);
                sum+=cardPoints[i++];
            }
        }
        return ans;
    }
};