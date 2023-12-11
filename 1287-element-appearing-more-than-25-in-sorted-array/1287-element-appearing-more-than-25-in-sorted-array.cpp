class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int t=n/4;
        unordered_map<int,int>mp;
        for(int i=0;i<n-t;i++)
        {
            if(arr[i]==arr[i+t])
                return arr[i];
        }
        
        return -1;
    }
};