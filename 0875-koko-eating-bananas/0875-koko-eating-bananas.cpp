class Solution {
public:
    
    int days(vector<int>& p, int m)
    {
        int sum=0;
        int n=p.size();
        for(int i=0;i<n;i++)
        {
                sum+=((p[i]+(m-1))/m);
        }
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int low=h-1;
        low=accumulate(piles.begin(),piles.end(),low)/h;
        int high=*max_element(piles.begin(),piles.end());
        // int ans=high;
        while(low<high)
        {
            int mid=(low+high)/2;
            if(days(piles,mid)<=h)
            high=mid;
            else
                low=mid+1;
        }
        return high;
    }
};