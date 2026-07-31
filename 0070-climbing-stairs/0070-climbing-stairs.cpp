class Solution {
public:
vector<int>dp =vector<int>(46,-1);
    int climbStairs(int n) {
        if(n<=2)return dp[n]= n;
        if(dp[n]!= -1)return dp[n];
        return dp[n]=climbStairs(n-1) + climbStairs(n-2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna