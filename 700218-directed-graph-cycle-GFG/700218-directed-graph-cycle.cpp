class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>>& edges) {
        vector<int> in(V, 0), q;
        vector<vector<int>> adj(V);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            in[e[1]]++;
        }

        for (int i = 0; i < V; ++i)
            if (!in[i]) q.push_back(i);

        for (int i = 0; i < q.size(); ++i)
            for (int v : adj[q[i]])
                if (!--in[v]) q.push_back(v);

        return q.size() != V;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna