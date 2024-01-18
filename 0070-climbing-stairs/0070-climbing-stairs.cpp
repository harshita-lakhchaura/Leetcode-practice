class Solution {
public:
    int climbStairs(int n) {
        int x=1,y=1,z=0;
        for(int i=2;i<=n;i++)
        {
            z=x+y;
            x=y;
            y=z;
        }
        if(n==1)
        return 1;
        return z;
    }
};