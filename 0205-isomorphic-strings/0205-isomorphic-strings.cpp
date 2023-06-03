class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,set<char>>ch;        
        map<char,set<char>>c;

        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
        {
            ch[s[i]].insert(t[i]);            
            c[t[i]].insert(s[i]);
            
        }
        if(ch.size()!=c.size())
            return false;
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i].size()>1 || c[i].size()>1)
                return false;
        }
        return true;
    }
};