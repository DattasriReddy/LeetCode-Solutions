/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return false;
        
        // Stack stores pair of: {Current Node, Remaining Target Sum}
        std::stack<std::pair<TreeNode*, int>> s;
        s.push({root, targetSum - root->val});
        
        while (!s.empty()) {
            auto [curr, currSum] = s.top();
            s.pop();
            
            // Check if it's a leaf node and the path matches targetSum
            if (curr->left == nullptr && curr->right == nullptr && currSum == 0) {
                return true;
            }
            
            // Push right child first so left child gets processed first (DFS order)
            if (curr->right != nullptr) {
                s.push({curr->right, currSum - curr->right->val});
            }
            if (curr->left != nullptr) {
                s.push({curr->left, currSum - curr->left->val});
            }
        }
        
        return false;
    }
};
