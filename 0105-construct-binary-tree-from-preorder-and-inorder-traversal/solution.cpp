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
    int preidx=0;
    TreeNode* build(vector<int>& preorder, vector<int>& inorder,int left,int right){
        if(left>right) return NULL;
        int rootval= preorder[preidx++];
        TreeNode* root = new TreeNode(rootval);
        int pos=left;
        while(inorder[pos]!= rootval){
            pos++;
        }
        root->left=build(preorder, inorder,left,pos-1);
        root->right=build(preorder, inorder,pos+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build( preorder, inorder,0,inorder.size()-1);
    }
};
