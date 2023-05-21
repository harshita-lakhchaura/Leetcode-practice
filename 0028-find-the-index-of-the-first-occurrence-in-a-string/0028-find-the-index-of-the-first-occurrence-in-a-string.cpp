class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans=-1;
        int i=0,j=0;
        int k=needle.length();
        string st="";
        while(j<haystack.length())
        {
            st+=haystack[j];
            if(j-i+1<k)
            {
                j++;
            }
            else
            {
                if(st==needle)
                {
                    ans=i;
                    break;
                }
                st.erase(0, 1);
                i++;
                j++;
            }
        }
        return ans;
    }
};