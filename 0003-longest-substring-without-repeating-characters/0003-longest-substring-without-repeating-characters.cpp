class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        set<char>temp;
        int i=0,j=0,mx=0;
        while(j<n)
        {
            temp.insert(s[j]);
            if(temp.size()<j-i+1)
            {
                if(mx<temp.size())
                mx=temp.size();
                temp.erase(s[i]);
                i++;
                j=j-2;
            }
            j++;
        }
        if(mx<temp.size())
        mx=temp.size();
        if(s==" ")
        return 1;
        else
        return mx;
    }
};