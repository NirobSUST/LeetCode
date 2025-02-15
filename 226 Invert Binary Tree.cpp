class Solution {
public:

    void swap(TreeNode* current)
    {
        if (!current)    return;
        swap(current->left);
        swap(current->right);

        TreeNode* temp;
        temp = current->left;
        current->left = current->right;
        current->right = temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        swap(root);
        return root;
    }
};
/*
Time Complexity: 𝑂(𝑁)
Space Complexity: O(N) (worst case) / O(logN) (best case)
*/