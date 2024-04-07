class Solution {
public:
    bool checkValidString(string s) {
        stack<int>st1;
        stack<int>st2;
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                st1.push(i);
            else if(s[i]=='*')
                st2.push(i);
            else
            {
                if(!st1.empty())
                    st1.pop();
                else if(!st2.empty())
                    st2.pop();
                else
                    return false;
            }
        }
    while(!st1.empty() && !st2.empty())
    {
        if(st1.top()>st2.top())
            return false;
        st1.pop();
        st2.pop();
    }
     return st1.empty();
    }
};