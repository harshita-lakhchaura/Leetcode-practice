class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>v1;
        vector<int>v2;
        int n=version1.length();
        int m=version2.length();
        string st="",t="";
        for(int i=0;i<n;i++)
        {
            if(version1[i]!='.')
                st+=version1[i];
            else
            {
                v1.push_back(stoi(st));
                st="";
            }
        }
         v1.push_back(stoi(st));
        
        for(int i=0;i<m;i++)
        {
            if(version2[i]!='.')
                t+=version2[i];
            else
            {
                v2.push_back(stoi(t));
                t="";
            }
        }
         v2.push_back(stoi(t));
        
        if(v1.size()>v2.size())
        {
            for(int i=v2.size();i<v1.size();i++)
                v2.push_back(0);
        }
        else
        {
            for(int i=v1.size();i<v2.size();i++)
                v1.push_back(0);
        }
        
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]<v2[i])
                return -1;
            else if(v1[i]>v2[i])
                return 1;
        }
        return 0;
    }
};