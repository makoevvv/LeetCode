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
    vector <int> dfs (TreeNode* root, vector <int> vc) {
        if (root != nullptr) {
            vc.push_back(root->val);
            return dfs(root->right, dfs(root->left, vc));
        }
        return vc;
    }
    int getMinimumDifference(TreeNode* root) {
        vector <int> vc;
        vc = dfs(root, vc);
        sort(vc.begin(), vc.end());
        int ans = vc[vc.size() - 1];
        for (int i = 0; i < vc.size() - 1; i++) {
            ans = min(ans, vc[i + 1] - vc[i]);
        }
        return ans;
    }
};