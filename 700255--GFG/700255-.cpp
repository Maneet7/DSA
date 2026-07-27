class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        
        // Step 1: Create adjacency list
        vector<vector<int>> adj(V);
        vector<int> indegree(V, 0);
        
        for(int i = 0; i < edges.size(); i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
            indegree[v]++;   // increase indegree of v
        }
        
        // Step 2: Push all nodes with indegree 0
        queue<int> q;
        for(int i = 0; i < V; i++) {
            if(indegree[i] == 0) {
                q.push(i);
            }
        }
        
        // Step 3: Process queue
        vector<int> topo;
        
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            
            topo.push_back(node);
            
            for(int i = 0; i < adj[node].size(); i++) {
                int neigh = adj[node][i];
                indegree[neigh]--;
                
                if(indegree[neigh] == 0) {
                    q.push(neigh);
                }
            }
        }
        
        return topo;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna