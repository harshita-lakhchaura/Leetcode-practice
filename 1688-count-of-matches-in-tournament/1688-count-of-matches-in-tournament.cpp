class Solution {
public:
    
    int checkMatches(int n, int cnt)
    {
        if(n<=1)
            return cnt;
        else
        {
            if(n%2==0)
                return checkMatches(n/2,cnt+(n/2));
            else
                return checkMatches(n/2+1,cnt+(n/2));
        }
    }
    
    int numberOfMatches(int n) {
        int ans=checkMatches(n,0);
        return ans;
    }
};