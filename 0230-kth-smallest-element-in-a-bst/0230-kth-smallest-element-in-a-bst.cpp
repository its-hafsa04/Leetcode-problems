/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int Kth_val(TreeNode* root, int& k) {
        if (root == NULL || k == 0)
            return -1;
        int left = Kth_val(root->left, k);
        if (k == 0)
            return left;
        k--;
        if (k == 0)
            return root->val;
        return Kth_val(root->right, k);
        int kthSmallest(TreeNode * root, int k) { return Kth_val(root, k); }
    };