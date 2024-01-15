class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int n=matches.size();
        map<int,int>mp;
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            mp[matches[i][0]]+=0;
            mp[matches[i][1]]++;
        }
        vector<int>win,lose;
        for(auto i:mp)
        {
            if(i.second==0)
                win.push_back(i.first);
            if(i.second==1)
                lose.push_back(i.first);
        }
        ans.push_back(win);
        ans.push_back(lose);
        return ans;
    }
};