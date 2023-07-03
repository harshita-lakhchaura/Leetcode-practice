class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string>ans;
        int n=s.length();
        int i=0,j=0,k=10;
        string st="";
        map<string,int>res;
        while(j<n)
        {
            st+=s[j];
            if(j-i+1<k)
            {
                j++;
            }
            else
            {
                res[st]++;
                st.erase(st.begin());
                i++;
                j++;
            }
        }
        for(auto i:res)
        {
            // cout<<i.first<<" "<<i.second<<endl;
            if(i.second>1)
                ans.push_back(i.first);
        }
        return ans;
    }
};