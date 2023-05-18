class Solution {
public:
    bool check(string &s, int i, int j){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }            
    string longestPalindrome(string s) {
        int n = s.size();
        int start = 0;
        int mx = 0;
        for(int i=0; i<n; i++){
            for(int j=i; j<n; j++){
                if(check(s, i, j)){
                    if(j-i+1 > mx){
                        mx = j-i+1;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start, mx);
    }
};