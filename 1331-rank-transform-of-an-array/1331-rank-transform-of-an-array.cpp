class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        map<int,int>mp;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(mp.find(temp[i])==mp.end())
            {
                mp[temp[i]]=cnt+1;
                cnt++;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(mp[arr[i]]);
        }
        return ans;

    }
};