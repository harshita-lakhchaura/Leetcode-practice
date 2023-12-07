class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int i=0;
        for(i=n-1;i>=0;i--)
        {
            if((int(num[i]))%2!=0)
            {
                break;
            }
        }
        string st=num.substr(0,i+1);
        return st;
    }
};