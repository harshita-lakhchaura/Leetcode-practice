class Solution {
public:
    int minBitFlips(int start, int goal) {
        int cnt=0;
        while(start>0 || goal>0)
        {
            if((start%2 == 0 && goal%2 != 0) || (start%2 != 0 && goal%2 == 0))
                cnt++;
            start=start>>1;
            goal=goal>>1;
        }
        return cnt;
    }
};