class Solution {
public:
    int totalMoney(int n) {
        int amt=0,d=0;
        for(int i=0;i<n;i++)
        {
            if(i%7==0)
            {
                d=(i/7)+1;
            }
            else
                d+=1;
            amt+=d;
            // cout<<amt<<" "<<d<<endl;
        }
        return amt;
    }
};