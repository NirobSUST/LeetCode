class Solution {
public:
    // Function to calculate the diameter of the binary tree
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0; // Variable to store the maximum diameter found
        dfs(root, diameter); // Start DFS traversal from the root
        return diameter; // Return the maximum diameter found
    }

    // DFS function to compute the height of the tree and update the diameter
    int dfs(TreeNode* curr, int &diameter) {
        if (!curr) return 0; // If node is null, return height as 0

        // Recursively calculate the height of the left and right subtrees
        int left = dfs(curr->left, diameter);
        int right = dfs(curr->right, diameter);

        // Update the diameter (longest path between any two nodes)
        diameter = max(diameter, left + right);

        // Return the height of the current node
        return max(left, right) + 1;
    }
};

/*
Time Complexity -> O(N)
Space Complexity -> O(h) Recursive Depth
*/