class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        int n=paths.size();
        for(int i=0;i<n;i++)
        {
            mp[paths[i][0]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.find(paths[i][1])!=mp.end())
            {
                continue;
            }
            else
                return paths[i][1];
        }
        return "";
    }
};