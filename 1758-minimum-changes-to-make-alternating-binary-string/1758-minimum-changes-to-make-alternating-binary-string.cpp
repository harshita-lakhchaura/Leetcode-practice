class Solution {
public:
    int minOperations(string s) {
        int ans=0,cnt1=0,cnt2=0;
        int n=s.length();
        string s1="",s2="";
        bool c=false;
        // cout<<(int)c<<" "<<(int)!c;
        for(int i=0;i<n;i++)
        {
            s1+=char((int)c+48);
            s2+=char((int)!c+48);
            c=!c;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]!=s1[i])
                cnt1++;
            if(s[i]!=s2[i])
                cnt2++;
        }
        ans=min(cnt1,cnt2);
        return ans;
    }
};