class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        if(n!=m)
            return false;
        int count1[26]={0};
        int count2[26]={0};
        for(int i=0;i<n;i++)
        {
            count1[(int)word1[i]-97]++;
        }
        for(int i=0;i<n;i++)
        {
            count2[(int)word2[i]-97]++;
        }
        for(int i=0;i<26;i++)
        {
            if(count1[i]!=0 && count2[i]==0 || count1[i]==0 && count2[i]!=0)
                return false;
        }
        int check[100001]={0};
        for(int i=0;i<100001;i++)
        {
            for(auto x:count1)
                check[x]++;
            for(auto x:count2)
                check[x]--;
        }
        for(auto i:check)
        {
            if(i!=0)
                return false;
        }
        return true;
    }
};