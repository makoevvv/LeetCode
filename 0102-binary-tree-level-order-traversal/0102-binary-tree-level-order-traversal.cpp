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
    vector<vector<int>> ans;

    void foo(TreeNode* root, int cur_level) {
        if (root) {
            if (cur_level > ans.size()) {
                vector <int> vc;
                vc.push_back(root->val);
                ans.push_back(vc);
            } else {
                ans[cur_level - 1].push_back(root->val);
            }
            foo(root->left, cur_level + 1);
            foo(root->right, cur_level + 1);
        }
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        foo(root, 1);
        return ans;
    }
};