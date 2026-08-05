class Solution {
public:
    int knapSack(vector<int>& val, vector<int>& wt, int capacity) {
        int n = val.size();
        vector<int> dp(capacity + 1, 0);
        
        for (int i = 0; i < n; i++) {
            for (int w = wt[i]; w <= capacity; w++) {
                dp[w] = max(dp[w], dp[w - wt[i]] + val[i]);
            }
        }
        return dp[capacity];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna