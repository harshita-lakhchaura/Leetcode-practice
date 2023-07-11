class Solution {
public:
    
    int eat(vector<int>&piles, int k)
    {
        int sum=0;
        for(int i:piles)
            sum+=(i+(k-1))/k;
        return sum;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        long long int l=h-1;
        l=accumulate(piles.begin(),piles.end(),l)/h;
        long long int r=*max_element(piles.begin(),piles.end());
        
        while(l<r)
        {
            int m=(l+r)/2;
            if(eat(piles,m)<=h)
                r=m;
            else
                l=m+1;
        }
        return r;
        
    }
};