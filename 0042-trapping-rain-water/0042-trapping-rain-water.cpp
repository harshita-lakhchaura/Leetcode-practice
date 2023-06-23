class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>l;
        vector<int>r;
        int vol=0,p=0,q=0;
        for(int i=0;i<n;i++)
        {
            p=max(height[i],p);
            l.push_back(p);
        }
        for(int i=n-1;i>=0;i--)
        {
            q=max(height[i],q);
            r.push_back(q);
        }
        reverse(r.begin(),r.end());
        for(int i=0;i<n;i++)
        vol+=min(l[i],r[i])-height[i];
        
        return vol;
    }
};