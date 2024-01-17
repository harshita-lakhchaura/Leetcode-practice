class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        vector<int>cnt(n+1,0);
        for(auto i:mp)
        {
            cnt[i.second]++;
        }
        for(auto i:cnt)
        {
            if(i>1)
                return false;
        }
        return true;
    }
};