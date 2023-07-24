class Solution {
public:
    string frequencySort(string s) {
        vector<int>cnt(127,0);
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            cnt[int(s[i])]++;
        }
        string ans="";
        map<int,vector<char>>mp;
        for(auto i=0;i<cnt.size();i++)
        {
            if(cnt[i]>0)
            {
                mp[cnt[i]].push_back(char(i));
            }
        }
        for(auto i:mp)
        {
            for(auto x:i.second)
            {
                for(int j=0;j<i.first;j++)
                    ans+=x;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};