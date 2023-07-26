class Solution {
public:
    
    double findSpeed(vector<int>& dist, int sp, int n)
    {
        double time=0.0;
        for(int i=0;i<n;i++)
        {
            time+=(i==dist.size()-1)?(double(dist[i])/(double)sp):ceil(double(dist[i])/(double)sp);
            
        }
        return time;
    }
    
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int n=dist.size();
        int l=1,r=10000000,speed=-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(findSpeed(dist,m,n)<=hour)
            {
                speed=m;
                r=m-1;
            }
            else
                l=m+1;
        }
         return speed;
    }
};