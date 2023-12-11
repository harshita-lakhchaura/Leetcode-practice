class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int t=n/4;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(auto i:mp)
        {
            if(i.second>t)
                return i.first;
        }
        return -1;
    }
};