class Solution {
public:
    int largestVariance(string s) {
        int c1=0;
        int c2=0;
        int ans=0;
        
        unordered_set<char>d(s.begin(),s.end());
        
        for(int i=0;i<2;i++)
        {
            for(char j:d)
            {
                for(char k:d)
                {
                    if(k==j)
                        continue;
                    c1=0,c2=0;
                    for(char x:s)
                    {
                        if(x==j)
                            c1++;
                        else if(x==k)
                            c2++;
                        
                        if(c1<c2)
                            c1=0,c2=0;
                        else if(c1>0 && c2>0)
                            ans=max(ans,c1-c2);
                    }
                }
            }
            reverse(s.begin(),s.end());
        }
        return ans;
    }
};