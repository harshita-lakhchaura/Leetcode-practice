class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char,int>mp;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<words[i].length();j++)
                mp[words[i][j]]++;
        }
        for(auto i:mp)
        {
            if(i.second%n!=0)
                return false;
        }
        return true;
    }
};