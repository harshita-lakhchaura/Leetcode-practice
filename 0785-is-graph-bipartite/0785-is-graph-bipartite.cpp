class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1); // color 0 or 1, -1 means no color
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (BFS(graph, color, i) == false)
                    return false;
            }
        }

        return true;
    }

private:
    bool BFS(vector<vector<int>>& graph, vector<int>& color, int& start) {
        color[start] = 0;
        queue<int> Q; Q.push(start);

        while (!Q.empty()) {
            int node = Q.front(); Q.pop();
            for (auto& adjNode : graph[node]) {
                if (color[adjNode] == color[node]) {
                    return false;
                } else if (color[adjNode] == -1) {
                    color[adjNode] = 1 - color[node];
                    Q.push(adjNode);
                }
            }
        }

        return true;
    }
};