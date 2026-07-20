class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        int n=arr.size();
        priority_queue<int,vector<int>,greater<int>>h;
        for(int i=0;i<k;i++){
            h.push(arr[i]);
        }
       for (int i = k; i < n; i++) {
            if (arr[i] > h.top()) {
                h.pop();
                h.push(arr[i]);
            }
       }
        vector<int>ans(k);
        for(int i=k-1;i>=0;i--){
            ans[i]=h.top();
            h.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna