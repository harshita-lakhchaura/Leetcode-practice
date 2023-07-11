class Solution {
public:
    
    bool possible(vector<int>& bloomDay, int m, int k, int day)
    {
        int cnt=0,res=0;
        for(int i:bloomDay)
        {
            if(i<=day)
                cnt++;
            else
            {
                res+=cnt/k;
                cnt=0;
            }
        }
        res+=cnt/k;
        return res>=m;
    }
    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int ans=-1;
        int left=0,right=*max_element(bloomDay.begin(),bloomDay.end());
        while(left<=right)
        {
            int md=(left+right)/2;
            if(possible(bloomDay,m,k,md))
            {
                ans=md;
                right=md-1;
            }
            else
                left=md+1;
        }
        return ans;
    }
};