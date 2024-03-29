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
        if(root == NULL) return false;
        else if(root->val == targetSum && root->left == nullptr && root->right == nullptr) return true;
        else{
            int newtarget = targetSum - root->val;
            return hasPathSum(root->left,newtarget) || hasPathSum(root->right,newtarget);
        }
        
    }
};