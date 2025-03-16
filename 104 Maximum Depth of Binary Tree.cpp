class Solution {
public:
    // Function to find the maximum depth of a binary tree
    int maxDepth(TreeNode* root) {
        // Base case: if the node is null, return depth as 0
        if (!root) return 0;

        // Recursively find the depth of the left and right subtrees,
        // and take the maximum of both, adding 1 for the current node
        return 1 + std::max(maxDepth(root->left), maxDepth(root->right));
    }
};
/*
Time Complexity -> O(N)
Space Complexity ->     Balanced Tree -> O(log N)
                        Skewed Tree   -> O(N)

*/