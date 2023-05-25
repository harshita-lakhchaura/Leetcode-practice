class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string s="11";
        string st;
        for(int i=3;i<=n;i++)
        {
            st="";
            s+='&';
            int c=1;
            for(int j=1;j<s.length();j++)
            {
                if(s[j]==s[j-1])
                    c++;
                else
                {
                    st+=to_string(c);
                    st+=s[j-1];
                    c=1;
                }
            }
            s=st;
        }
        return s;
    }
};