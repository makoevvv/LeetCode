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

    bool check (TreeNode* a, TreeNode* b) {
        if (a == nullptr && a == b) {
            return true;
        } else {
            if (a == nullptr || b == nullptr) {
                return false;
            } else {
                if (a->val == b->val) {
                    return (check(a->left, b->left) && check(a->right, b->right) && true);
                } else {
                    return false;
                }
            }
        }
    }


    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (root == nullptr && subRoot == root) {
            return true;
        } else if (root == nullptr || subRoot == nullptr) {
            return false;
        } else if (root->val == subRoot->val){
            if(check(root, subRoot)) {
                return true;
            } else {
                return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
            }
        } else {
            return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
        }       
    }
};