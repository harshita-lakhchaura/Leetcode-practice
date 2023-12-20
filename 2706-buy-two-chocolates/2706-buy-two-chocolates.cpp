class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans=INT_MAX;
        sort(prices.begin(),prices.end());
        int n=prices.size();
        int i=0,j=n-1;
        while(i<j)
        {
            if(prices[i]+prices[j]>money)
            {
                j--;
            }
            else if(prices[i]+prices[j]<=money)
            {
                ans=money-(prices[i]+prices[j]);
                j--;
            }
        }
        if(ans>money)
            ans=money;
        return ans;
    }
};