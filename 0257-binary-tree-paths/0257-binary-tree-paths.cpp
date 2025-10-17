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
    vector <string> ans;
    void foo (TreeNode* root, string str) {
        if (root -> left == nullptr && root -> right == nullptr) {
            str += to_string(root -> val);
            ans.push_back(str);
        } else {
            int k = root -> val;
            if (root -> left != nullptr) {
                foo(root -> left, str + to_string(k) + "->");
            }
            if (root -> right != nullptr) {
                foo(root -> right, str + to_string(k) + "->");
            }
        }
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        foo(root, "");
        return ans;
    }
};