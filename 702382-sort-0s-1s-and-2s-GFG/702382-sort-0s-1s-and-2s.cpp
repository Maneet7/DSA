class Solution {
  public:
    void sort012(vector<int>& arr) {
    int i=0;
    int j=0;
    int k=arr.size()-1;
    while(j<=k){
        if(arr[j]==0){
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else if(arr[j]==1){
            j++;
        }
        else if(arr[j]==2){
            swap(arr[j],arr[k]);
            k--;
    }
    }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna