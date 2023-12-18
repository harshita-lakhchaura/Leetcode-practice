class Solution {
public:
    
    bool isPal(int n) {
        long long r, sum = 0, temp;
        temp = n;
        while (n > 0) {
            r = n % 10;
            sum = (sum * 10) + r;
            n = n / 10;
        }
        return temp == sum;
    }
    
     long long calculateCost(vector<int>& nums, int r) {
        long long cost = 0;
        for (int n : nums) {
            cost += abs(n - r);
        }
        return cost;
    }
    
    long long minimumCost(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        
        if(n==1) return 0;
        
        int med=(n%2)?nums[n/2]:(nums[n/2]+nums[(n+1)/2])/2;
        
        long long int ans=1e15;
        if(isPal(med))
           ans=calculateCost(nums,med);
        
        long long low=med-1;
        long long high=med+1;
        long long left=-1,right=-1;
        while(left==-1 || right==-1) {
            if(left==-1 && isPal(low)) {
                left=low;
            }
            if(right==-1 && isPal(high)) {
                right=high;
            }
            low--;
            high++;
        }
        return min(ans,min(calculateCost(nums,right),calculateCost(nums,left)));
    }
};