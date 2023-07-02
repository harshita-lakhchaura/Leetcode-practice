class Solution {
public:
    int countDigitOne(int n)
{
    int ans = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        ans += (n / divider) * i + min(max(n % divider - i + 1, 0LL), i);
    }
    return ans;
}
};