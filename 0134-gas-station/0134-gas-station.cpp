class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int start=0,g=0,tg=0;
        for(int i=0;i<n;i++)
        {
            tg+=(gas[i]-cost[i]);
            g+=(gas[i]-cost[i]);
            if(g<0)
            {
                start=i+1;
                g=0;
            }
        }
        if(tg<0)
            return -1;
        else
            return start;
        return start;
    }
};