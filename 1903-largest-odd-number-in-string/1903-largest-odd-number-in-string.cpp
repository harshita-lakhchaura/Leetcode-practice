class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.length();
        int i;
        for(i=n-1;i>=0;i--)
        {
            if(((int)num[i])%2!=0)
                break;
        }
        string str=num.substr(0,i+1);
        return str;
    }
};