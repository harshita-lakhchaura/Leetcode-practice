   
    bool compareSecond(vector<int>& a, vector<int>& b) {
    return a[1] < b[1];
}

class Solution {
public:
 
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), compareSecond);
        int cnt=0,k=INT_MIN;
        for(int i=0;i<intervals.size();i++)
        {
            if(intervals[i][0]>=k)
                k=intervals[i][1];
            else
                cnt++;
        }
        return cnt;
    }
};