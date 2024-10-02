class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        map<int,vector<int>>mp;
        int cnt=1;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]].push_back(i);
        }
        for (auto pair : mp) {
            for (auto index : pair.second) {
                arr[index] = cnt;
            }
            cnt++;
        }
        return arr;

    }
};
