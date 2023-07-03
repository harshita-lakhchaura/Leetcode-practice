class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        string st=s;
        int c=0,t=0;
        map<char,int>mp;
        if(n!=m)
            return false;
        if(s==goal)
        {
            for(int i=0;i<n;i++)
                mp[s[i]]++;
            for(auto i:mp)
            {
                if(i.second>1)
                    return true;
            }
            return false;
        }
        int f=-1,se=-1;
        for(int i=0;i<n;i++)
        {
            if(s[i]!=goal[i])
            {
                if(f==-1)
                    f=i;
                else if(f!=-1 && se==-1)
                    se=i;
                else if(f!=-1 && se!=-1)
                    return false;
            }
        }
        if(f==-1 || se==-1)
            return false;
        if(s[f]==goal[se] && s[se]==goal[f])
            return true;
        return false;
    }
};