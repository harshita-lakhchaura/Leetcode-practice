class Solution {
public:
    int cherryPickup(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();

        std::vector<std::vector<std::vector<int>>> DP(rows, std::vector<std::vector<int>>(cols, std::vector<int>(cols, -1)));

        for (int j1 = 0; j1 < cols; ++j1) {
            for (int j2 = 0; j2 < cols; ++j2) {
                DP[rows - 1][j1][j2] = grid[rows - 1][j1];
                if (j1 != j2) {
                    DP[rows - 1][j1][j2] += grid[rows - 1][j2];
                }
            }
        }

        for (int i = rows - 2; i >= 0; --i) {
            for (int j1 = 0; j1 < cols; ++j1) {
                for (int j2 = 0; j2 < cols; ++j2) {
                    int cherries = grid[i][j1];
                    if (j1 != j2) {
                        cherries += grid[i][j2];
                    }

                    for (int nj1 = j1 - 1; nj1 <= j1 + 1; ++nj1) {
                        for (int nj2 = j2 - 1; nj2 <= j2 + 1; ++nj2) {
                            if (nj1 >= 0 && nj1 < cols && nj2 >= 0 && nj2 < cols) {
                                DP[i][j1][j2] = std::max(DP[i][j1][j2], cherries + DP[i + 1][nj1][nj2]);
                            }
                        }
                    }
                }
            }
        }

        return DP[0][0][cols - 1];
    }
};