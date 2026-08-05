class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        // Step 1: Build the adjacency list
        vector<vector<int>> adj(n);
        for (const auto& inv : invocations) {
            adj[inv[0]].push_back(inv[1]);
        }

        // Step 2: Find all suspicious methods starting from k using DFS
        vector<bool> suspicious(n, false);
        auto dfs = [&](auto& self, int u) -> void {
            suspicious[u] = true;
            for (int v : adj[u]) {
                if (!suspicious[v]) {
                    self(self, v);
                }
            }
        };
        dfs(dfs, k);

        // Step 3: Check if any non-suspicious method invokes a suspicious method
        bool canRemove = true;
        for (const auto& inv : invocations) {
            int u = inv[0], v = inv[1];
            if (!suspicious[u] && suspicious[v]) {
                canRemove = false;
                break;
            }
        }

        // Step 4: Prepare the final output
        vector<int> result;
        for (int i = 0; i < n; ++i) {
            if (canRemove && suspicious[i]) {
                continue; // Skip removed methods
            }
            result.push_back(i);
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna