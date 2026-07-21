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

    int height(TreeNode* root, int& maxD){
        if(!root){
            return 0;
        }

        int left = height(root->left, maxD);
        int right = height(root->right, maxD);

        maxD = max(maxD, left+right);

        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxD = INT_MIN;
        height(root, maxD);
        return maxD;
    }
};