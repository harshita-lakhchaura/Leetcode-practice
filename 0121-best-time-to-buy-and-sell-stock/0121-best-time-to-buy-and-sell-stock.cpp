class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=INT_MAX,p=0,profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<ans)
                ans=prices[i];
            p=prices[i]-ans;
            profit=max(profit,p);
        }
        return profit;
    }
};