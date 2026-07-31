class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      long  int ans=0;
        for(int x: nums){
            ans=ans^x;
        }
      long  int r= ans &(-ans);
        int a=0;
        int b=0;
        for(auto x: nums){
            if(x&r) a^=x;
            else b^=x;
        }
        return{a,b};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna