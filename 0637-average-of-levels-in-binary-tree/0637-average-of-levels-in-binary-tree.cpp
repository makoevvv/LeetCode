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
    vector < pair <double, int> > vc;
    void foo (TreeNode* root, int curLev) {
        if (root != nullptr) {
            if (vc.size() < curLev + 1) {
                vc.push_back(make_pair(0.0, 0));
            }
            vc[curLev].first += root->val;
            vc[curLev].second++;
            foo(root->left, curLev + 1);
            foo(root->right, curLev + 1);
        }
    }
public:
    vector<double> averageOfLevels(TreeNode* root) {
        foo(root, 0);
        vector <double> ans;
        for (auto i : vc) {
            ans.push_back(i.first / i.second);
        }
        return ans;
    }
};