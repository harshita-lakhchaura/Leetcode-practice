class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        int n=s1.length();
        int m=s2.length();
        map<string, int>mp;
        string t="";
        for(int i=0;i<n;i++)
        {
            if(s1[i]==' ')
            { 
                mp[t]++;
                t="";
            }
            else
                t+=s1[i];
        }
        mp[t]++;
        t="";
        for(int i=0;i<m;i++)
        {
            if(s2[i]==' ')
            { 
                mp[t]++;
                t="";
            }
            else
                t+=s2[i];
        }
        mp[t]++;
        vector<string>vec;
        for(auto i:mp)
        {
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second==1)
                vec.push_back(i.first);
        }
        return vec;
    }
};