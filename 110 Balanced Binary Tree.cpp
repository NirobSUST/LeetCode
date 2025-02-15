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
    int checkHeight(TreeNode* root)
    {
        if (root == NULL)    return 0;

        int leftHeight = checkHeight(root->left);
        if (leftHeight == -1)    return -1;

        int rightHeight = checkHeight(root->right);
        if (rightHeight == -1)    return -1;

        if (abs(rightHeight - leftHeight) > 1)   return -1;

        return max(rightHeight, leftHeight) + 1;

    }
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }
};
/*
Time Complexity: O(n) (each node is visited once).
Space Complexity: O(h) (recursive stack height, h = log n for balanced tree, h = n for skewed tree).
*/