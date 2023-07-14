class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
        int n=arr.size();
        unordered_map<int,int>mp;
        int ans=1;
        for(auto a:arr)
        {
            int b=mp.count(a-difference)?mp[a-difference]:0;
            mp[a]=b+1;
            ans=max(ans,mp[a]);
        }
        return ans;
    }
};