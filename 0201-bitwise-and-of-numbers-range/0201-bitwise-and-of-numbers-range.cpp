class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=0;
        int m=left,n=right;
        for(int i=31;i>=0;i--){
            if((m & (1 << i)) != (n & (1 << i))){
                break;
            }
            else{
                ans |= ((m & (1 << i)));
            }
        }
        return ans;
    }
};