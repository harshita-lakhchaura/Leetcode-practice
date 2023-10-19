class Solution {
public:
    
    string process(string s)
    {
        stack<char>a;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='#')
            {
                if(a.empty())
                    continue;
                else
                    a.pop();
            }
            else
                a.push(s[i]);
        }
         string ans1="";
        while(!a.empty())
        {
            ans1+=a.top();
            a.pop();
        }
        return ans1;
    }
    
    bool backspaceCompare(string s, string t) {
        cout<<process(s)<<" "<<process(t)<<endl;
        return (process(s)==process(t));
    }
};