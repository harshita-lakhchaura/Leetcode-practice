class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int m=goal.length();
        string st=s+s;
        int found=st.find(goal);
        if(n==m && found>=0)
            return true;
            else
                return false;
    }
};