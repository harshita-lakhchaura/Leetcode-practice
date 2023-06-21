class Solution {
public:
    int fillCups(vector<int>& amount) {
        int sum=0,mx=0;
        for(int i=0;i<3;i++)
        {
            mx=max(amount[i],mx);
            sum+=amount[i];
        }
        return max(mx,(sum+1)/2);
    }
};