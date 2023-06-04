class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
            return true;
        else if(n%2!=0)
            return false;
        while(n!=0)
        {
            if(n==2)
                return true;
            n/=2;
            if(n%2!=0)
                return false;
        }
        return false;
    }
};