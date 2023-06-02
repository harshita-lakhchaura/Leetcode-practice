class Solution {
public:
    bool isHappy(int n) {
        int t=7;
        while(t>6)
        {
            int sum=0;
            while(n!=0)
            {
                sum+=(n%10)*(n%10);
                n=n/10;
            }
            n=sum;
            t=n;
            // cout<<sum<<endl;
        }
        if(t==1)
            return true;
        else
            return false;
    }
};