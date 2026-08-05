class Solution {
public:

    bool isSubsetSum(vector<int>& st, int sum) {
        int n = st.size();
        bool dp[n+1][sum+1];
        
        for(int i=0; i<=n; i++){
            for(int s=0; s<=sum; s++){
                if(s==0){
                    dp[i][s]=1;
                    continue;
                }
                if(i==0){
                    dp[i][s]=0;
                    continue;
                }
                if(s>=st[i-1]){
                    bool take = dp[i-1][s-st[i-1]];
                    bool dtake = dp[i-1][s];
                    dp[i][s]=take || dtake;
                }
                else dp[i][s]=dp[i-1][s];
            }
        }
        return dp[n][sum];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna