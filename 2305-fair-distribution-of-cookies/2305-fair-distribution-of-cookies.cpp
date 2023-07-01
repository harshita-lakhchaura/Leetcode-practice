class Solution {
public:
    int dfs(int i, vector<int>& d, vector<int>& cookies, int k, int zeroCount) {
        // If there are not enough cookies remaining, return INT_MAX 
        // as it leads to an invalid distribution.
        if (cookies.size() - i < zeroCount) {
            return INT_MAX;
        }

        // After distributing all cookies, return the unfairness of this
        // distribution.
        if (i == cookies.size()) {
            return *max_element(d.begin(), d.end());
        }

        // Try to distribute the i-th cookie to each child, and update answer
        // as the minimum unfairness in these distributions.
        int answer = INT_MAX;
        for (int j = 0; j < k; ++j) {
            zeroCount -= d[j] == 0 ? 1 : 0;
            d[j] += cookies[i];
            
            // Recursively distrdibute the next cookie.
            answer = min(answer, dfs(i + 1, d, cookies, k, zeroCount)); 
            
            d[j] -= cookies[i];
            zeroCount += d[j] == 0 ? 1 : 0;
        }
        
        return answer;
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int> d(k, 0);

        return dfs(0, d, cookies, k, k);
    }
};