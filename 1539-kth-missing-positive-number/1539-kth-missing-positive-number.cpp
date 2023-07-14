class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        for(int i=1;;i++)
        {
            if(mp.find(i)!=mp.end())
                continue;
            else
                k--;
            if(k==0)
                return i;
        }
        return -1;
    }
};