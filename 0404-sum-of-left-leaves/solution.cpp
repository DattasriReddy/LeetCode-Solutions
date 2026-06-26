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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        
        int sum = 0;
        
        // Check if the left child exists and is a leaf node
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val;
        } else {
            // If it is not a leaf, recurse into the left subtree
            sum += sumOfLeftLeaves(root->left);
        }
        
        // Always recurse into the right subtree
        sum += sumOfLeftLeaves(root->right);
        
        return sum;
    }
};
