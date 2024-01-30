class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if((int(tokens[i][0]))>=48 && (int(tokens[i][0]))<=57 || tokens[i].length()>1)
                st.push(stoi(tokens[i]));
            else
            {
                int x=st.top();
                st.pop();
                int y=st.top();
                st.pop();
                if(tokens[i]=="+")
                    ans=x+y;
                if(tokens[i]=="-")
                    ans=y-x;
                if(tokens[i]=="*")
                    ans=x*y;
                if(tokens[i]=="/")
                    ans=y/x;
                st.push(ans);
            }
        }
        return st.top();
    }
};