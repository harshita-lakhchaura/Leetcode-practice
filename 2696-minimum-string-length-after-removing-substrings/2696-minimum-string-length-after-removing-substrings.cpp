class Solution {
public:
    int minLength(string s) {
        int n=s.length();
        stack<char>m1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='B' && !m1.empty() && m1.top()=='A' || s[i]=='D' && !m1.empty() && m1.top()=='C')
                m1.pop();
            else
                m1.push(s[i]);
        }
        return m1.size();
    }
};