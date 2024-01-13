class Solution {
public:
    int minSteps(string s, string t) {
        int count[26]={0};
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            count[int(s[i])-97]++;
            count[int(t[i])-97]--;
        }
        int ans=0;
        for(auto i:count)
            ans+=max(0,i);
        return ans;
    }
};