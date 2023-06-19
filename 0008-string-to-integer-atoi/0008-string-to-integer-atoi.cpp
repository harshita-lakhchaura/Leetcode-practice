class Solution {
public:
    int myAtoi(string s) {
        int n=s.length();
        int sign=1;
        double num=0;
        int i=0;
        while(s[i]==' ')
            i++;
        if(s[i]=='-')
        {
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
        {
            sign=1;
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            num=num*10+(s[i]-'0');
            i++;
        }
        num=sign*num;
        num = (num > INT_MAX) ? INT_MAX : num;
        num = (num < INT_MIN) ? INT_MIN : num;
        return int(num);
    }
};