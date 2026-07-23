class Solution {
public:
    vector<vector<int>> ans;
    vector<bool> ld;
    vector<bool> rd;
    vector<bool> col;

    void helper(int n, vector<int>& psf, int i) {
        if (i == n) {
            ans.push_back(psf);
            return;
        }
        for (int j = 0; j < n; j++) {
            if (col[j] == false && ld[i + j] == false && rd[i-j+n-1] == false) {
                col[j] = true;
                ld[i + j] = true;
                rd[i - j + n - 1] = true;
                psf.push_back(j + 1);
                
                helper(n, psf, i + 1);
                
                psf.pop_back();
                col[j] = false;
                ld[i+j] = false;
                rd[i-j+n-1] = false;
            }
        }
    }

    vector<vector<int>> nQueen(int n) {

        ans.clear();
        
        ld = vector<bool>(2*n-1, false);
        rd = vector<bool>(2*n-1, false);
        col = vector<bool>(n, false);
        
        vector<int> psf;
        helper(n, psf, 0);
        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna