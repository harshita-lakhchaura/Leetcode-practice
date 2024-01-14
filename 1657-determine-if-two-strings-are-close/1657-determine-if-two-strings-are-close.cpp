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
        sort(count1,count1+26);
        sort(count2,count2+26);
        for(int i=0;i<26;i++)
        {
            if(count1[i]!=count2[i])
                return false;
        }
        return true;
    }
};