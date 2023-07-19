class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.length();
        stack<int>st;
        string t="";
        for(int i=0;i<n;i++)
        {
            if(st.empty())
                st.push(i);
            else
            {
                if(s[i]=='(')
                {
                    t+=s[i];
                    st.push(i);
                }
                else
                {
                    st.pop();
                    if(!st.empty())
                    t+=s[i];
                }
            }
        }
        return t;
    }
};