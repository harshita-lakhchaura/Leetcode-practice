class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string s=strs[i];
            int c=0,d=0;
            for(int j=0;j<s.length();j++)
            {
                if(s[j]>47 && s[j]<58)
                    d++;
                else
                    c++;
            }
            if(c>0 && d>0 || d==0)
                if(s.length()>ans)
                    ans=s.length();
            if(c==0)
                if(stoi(s)>ans)
                    ans=stoi(s);
        }
        return ans;
    }
};