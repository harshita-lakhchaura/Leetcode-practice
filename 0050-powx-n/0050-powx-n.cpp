class Solution {
public:
    double power(double x, int n)
    {
        double pow=1.0;
        while(n)
        {
            if(n%2 == 1 && n>0)
                pow *= x;
            else if(n%2 == -1 && n<0)
                pow /= x;

            x *= x;
            n /= 2;
        }
        return pow;
    }
    
    double myPow(double x, int n) {
        double ans=power(x,n);
        return ans;
    }
};