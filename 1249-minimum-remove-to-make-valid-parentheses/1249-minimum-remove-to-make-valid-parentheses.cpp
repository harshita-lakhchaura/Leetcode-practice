class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st1;
        stack<int>st2;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
                st1.push(i);
            else if(s[i]==')')
            {
                if(st1.empty())
                    st2.push(i);
                else
                    st1.pop();
            }
        }
        vector<int>temp;
        while(!st1.empty()) {
        temp.push_back(st1.top());
        st1.pop();
        }
        while(!st2.empty()) {
        temp.push_back(st2.top());
        st2.pop();
        }
        sort(temp.begin(),temp.end(),greater<int>());
        string t="";
        for(int i=0;i<temp.size();i++)
        {
            s.erase(s.begin()+temp[i]);
        }
        return s;
    }
};