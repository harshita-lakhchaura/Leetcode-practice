class Solution {
public:
    
    bool isPalindrome(string s)
    {
        int n=s.length();
        string t=s;
        reverse(s.begin(),s.end());
        if(s==t)
            return true;
        return false;
    }
    
    int countSubstrings(string s) {
        int n=s.length();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=n-i;j++)
            {
                string st=s.substr(i,j);
                if(isPalindrome(st))
                {
                    // cout<<st<<" "<<cnt<<",";
                    cnt++;
                }
            }
        }
        return cnt;
    }
};