class Solution {
  public:
    vector<bool> vi;

    // 1. Corrected parameter type to 2D vector & parameter name to 'adj'
    bool dfs(vector<vector<int>>& adj, int n, int parent) {
        vi[n] = true;
        for (auto adjacent : adj[n]) {
            if (!vi[adjacent]) {
                if (dfs(adj, adjacent, n)) return true;
            } else {
                if (parent != adjacent) {
                    return true;
                }
            }
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        // 2. Fixed capital 'V'
        vi = vector<bool>(V, false);

        vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {
            int a = edges[i][0];
            int b = edges[i][1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }

        for (int i = 0; i < V; i++) {
            if (!vi[i] && dfs(adj, i, -1)) 
                return true;
        }

        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna