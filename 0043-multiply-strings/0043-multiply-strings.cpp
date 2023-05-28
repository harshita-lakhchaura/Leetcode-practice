class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.length();
        int m = num2.length();
        string ans = ""; 
        vector<int> res(n+m+1,0);
        int k = res.size()-1;
        int p = k;
        int carry = 0;
        for(int i = m-1 ; i>=0 ; i--)
        {
            for(int j = n-1 ; j>=0 ; j--)
            {
                int val = (num1[j]-'0')*(num2[i]-'0') + carry + res[k];
                // cout<<val<<endl;
                if(val>=10)
                {
                    int t = val%10;
                    carry = val/10;
                    res[k] = t;
                    k--;
                }
                else{
                    res[k] = val ; carry = 0;
                    k--;
                }
            }
            res[k] = carry ; carry = 0 ; p-- ; k = p;
        }
        int i = 0;
        while(res[i]==0 && i<res.size()-1) i++;
        for( ; i<res.size();i++)
        {
            ans+=to_string(res[i]);
        }
        return ans;
    }
};