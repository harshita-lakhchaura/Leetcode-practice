class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,vector<int>>mp;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            mp[s[i]].push_back(i);
        }
        int ans=n;
        for(auto i:mp)
        {
            if(i.second.size()==1)
                ans=min(ans,i.second[0]);
        }
        if(ans==n)
            return -1;
        return ans;
    }
};