class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        int n=s.length();
        string temp="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
                temp+=s[i];
            else
            {
                if(temp!="")
                    v.push_back(temp);
                temp="";
            }
        }
        if(temp!="")
                    v.push_back(temp);
        reverse(v.begin(),v.end());
        string st="";
        for(int i=0;i<v.size()-1;i++)
        {
            st+=v[i];
            st+=' ';
        }
        st+=v[v.size()-1];
        return st;
    }
};