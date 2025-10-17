/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool findPath(TreeNode* curNode, TreeNode* neededNode, vector <TreeNode*>& path) {
        if (curNode) {
            if (curNode == neededNode) {
                path.push_back(curNode);
                return true;
            } else {
                bool l = findPath(curNode->left, neededNode, path);
                bool r = findPath(curNode->right, neededNode, path);
                if (l || r) {
                    path.push_back(curNode);
                    return true;
                } else {
                    return false;
                }
            }
        } 
        return false;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector <TreeNode*> pathToP, pathToQ;
        findPath(root, p, pathToP);
        findPath(root, q, pathToQ);
        
        set <TreeNode*> st;
        for (auto i: pathToP) {
            st.insert(i);
        }
        for (auto i: pathToQ) {
            if (st.find(i) != st.end()) {
                return i;
            }
        }
        return root;
    }
};