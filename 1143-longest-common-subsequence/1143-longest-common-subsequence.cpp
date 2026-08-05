class Solution {
public:
// vector<vector<int>> dp;
// int lcsrec(string &s1, string &s2,int i,int j) {
// if(i==0 || j==0)return 0;
// if(dp[i][j]!=-1) return dp[i][j];
// if(s1[i-1]==s2[j-1]) return 1 +lcsrec(s1,s2,i-1,j-1);
// return dp[i][j]= max(lcsrec(s1,s2,i-1,j),lcsrec(s1,s2,i,j-1));
// }
  int longestCommonSubsequence(string a, string b) {
       int n=a.size();
       int m=b.size();
       vector<vector<int>>dp(n+1,vector<int>(m+1,0));
       for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=1+ dp[i-1][j-1];
            }
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
       }
       return dp[n][m];
   }

 };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna