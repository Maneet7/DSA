class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int> count(26, 0);       // Tracks remaining occurrences of each character
        vector<bool> inStack(26, false); // Tracks if a character is currently in our result
        string result = "";              // Acts as our monotonic stack
        
        // Count frequencies of all characters
        for (char c : s) {
            count[c - 'a']++;
        }
        
        for (char c : s) {
            // Decrement the remaining count for the current character
            count[c - 'a']--;
            
            // If the character is already in our result, skip it to maintain uniqueness
            if (inStack[c - 'a']) {
                continue;
            }
            
            // Maintain monotonic increasing order where possible
            // Pop the last character if it's larger than 'c' AND it appears again later
            while (!result.empty() && result.back() > c && count[result.back() - 'a'] > 0) {
                inStack[result.back() - 'a'] = false;
                result.pop_back();
            }
            
            // Add the current character to our result
            result.push_back(c);
            inStack[c - 'a'] = true;
        }
        
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna