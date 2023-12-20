class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        int n=prices.size();
        
        int mn1=*min_element(prices.begin(),prices.end());
        
        if(count(prices.begin(),prices.end(),mn1)==1)
            prices.erase(remove(prices.begin(),prices.end(),mn1),prices.end());
        
        int mn2=*min_element(prices.begin(),prices.end());
        
        int ans=mn1+mn2;
        
        if(ans>money)
            ans=money;
        else
            ans=money-ans;
        return ans;
    }
};