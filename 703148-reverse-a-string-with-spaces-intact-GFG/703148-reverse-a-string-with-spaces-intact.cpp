class Solution {
  public:
    string reverses(string &s) {
     int i=0;
     int j=s.size()-1;
     while(i<j){
         if(s[i]==' ')i++;
         else if(s[j]==' ')j--;
         else{
         swap(s[i],s[j]);
         i++;
         j--;}
     }
     return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna