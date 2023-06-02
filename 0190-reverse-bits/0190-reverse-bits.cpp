class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int c = 0;
        while(n>0){
            ans+=(n%2) << (31-c);
            n >>= 1;
            c++;
        }
        return ans;
    }
};