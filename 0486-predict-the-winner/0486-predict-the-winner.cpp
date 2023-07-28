class Solution {
public:
    
    vector<vector<int>> player;
    int n;
    
    int game(int l, int r,  vector<int>& nums){
        if (l==r) return nums[l];
        if (player[l][r]!=INT_MIN) return player[l][r];
        return player[l][r]
            =max(nums[l]-game(l+1, r, nums), nums[r]-game(l, r-1, nums));
        
    }
    
    bool PredictTheWinner(vector<int>& nums) {
        n=nums.size();
        player.assign(n, vector<int>(n, INT_MIN));
        return game(0, n-1, nums)>=0;
    }
};