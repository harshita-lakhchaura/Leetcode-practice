class Solution {
public:
    long long int comb(int n, int r)
    {
         long long p = 1, k = 1;
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            long long m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
 
    else
        p = 1;
        
        return p;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        vector<int>row;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                row.push_back(comb(i,j));
            }
            pascal.push_back(row);
            row.clear();
        }
        return pascal;
    }
};