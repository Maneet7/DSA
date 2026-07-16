/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    
    vector<int> topView(Node *root) {
        vector<int>ans;
        if(root==NULL)return ans;
        queue<pair<Node*, int>>q;
        
        map<int, int> already;
        q.push({root,0});
        while(!q.empty()){
            Node* node = q.front().first;
            int hl = q.front().second;
            q.pop();
            if(already.find(hl) == already.end()){
                
                already[hl]=node->data;
                
            }
            if(node->left) q.push({node->left, hl-1});
            if(node->right) q.push({node->right, hl+1});
        }
        for(auto &i: already) ans.push_back(i.second);
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna