class Solution {
  public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
        vector<int>leftmax(n);
        vector<int>rightmax(n);
        leftmax[0]=height[0];
        rightmax[n-1]=height[n-1];
        for(int i=1;i<n;i++){
            leftmax[i]=max(leftmax[i-1],height[i]);
        }
        for(int j=n-2;j>=0;j--){
            rightmax[j]=max(rightmax[j+1],height[j]);
        }
        for(int i=1;i<n-1;i++){
            int mini=min(leftmax[i],rightmax[i]);
            ans+=mini-height[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna