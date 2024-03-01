class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        string t="";
        int c=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                c++;
        }
        for(int i=0;i<c-1;i++)
            t+='1';
        for(int i=c-1;i<s.length()-1;i++)
            t+='0';
        t+='1';
        return t;
    }
};