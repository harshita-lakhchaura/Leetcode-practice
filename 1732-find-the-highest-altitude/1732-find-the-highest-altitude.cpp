class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<long long int>height;
        height.push_back(0);
        for(int i=0;i<n;i++)
        height.push_back(gain[i]+height[i]);
        
        return *max_element(height.begin(),height.end());
    }
};