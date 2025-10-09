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
    vector<vector<int>> levelOrder(TreeNode* root) {

        if(!root)
            return {};

        vector<vector<int>> ans;
        queue<TreeNode*> que;
        que.push(root);
        que.push(0);
        vector<int> level;

        while(!que.empty()) {

            auto front = que.front();
            que.pop();

            if(front == 0) {
                ans.push_back(level);
                level.clear();
                if(!que.empty())
                    que.push(0);
            }
            else {
                level.push_back(front->val);
                if(front->left) {
                    que.push(front->left);
                }
                if(front->right) {
                    que.push(front->right);
                }
            }
        }

        return ans;
    }
};