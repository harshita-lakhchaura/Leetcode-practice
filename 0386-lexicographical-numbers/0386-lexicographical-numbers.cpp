class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string>vec;
        for(int i=1;i<=n;i++)
            vec.push_back(to_string(i));
        sort(vec.begin(),vec.end());
        vector<int>ans;
        for(auto i:vec)
            ans.push_back(stoi(i));
        
        return ans;
    }
};