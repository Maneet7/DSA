class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s=0;
        int e=arr.size()-1;
        while(e-s>=k){
            if(x-arr[s]>arr[e]-x){
                s++;
            }
            else
            e--;
        }
        vector<int>ans;
        for(int i=s;i<=e;i++){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna