class Solution {
public:
    int trap(vector<int>& height) {
        // Initialize left and right max heights to zero
        int maxL = 0, maxR = 0;
        
        // Set pointers for left and right ends of the height array
        int L = 0, R = height.size() - 1;
        
        // Variable to keep track of the total trapped water
        int blockCount = 0;

        // Process until the two pointers meet
        while (L < R) {
            // Update maxL to be the maximum height encountered from the left
            maxL = max(maxL, height[L]);
            
            // Update maxR to be the maximum height encountered from the right
            maxR = max(maxR, height[R]);

            // If left side is shorter, calculate trapped water on the left
            if (height[L] < height[R]) {
                // Add the difference between maxL and current height to trapped water
                blockCount += maxL - height[L];
                
                // Move the left pointer to the right
                L++;
            } 
            // Otherwise, calculate trapped water on the right side
            else {
                // Add the difference between maxR and current height to trapped water
                blockCount += maxR - height[R];
                
                // Move the right pointer to the left
                R--;
            }
        }

        // Return the total amount of trapped water
        return blockCount;
    }
};

/*
Time Complexity: O(n) - We traverse the height array once using two pointers, making this a linear-time solution.
Space Complexity: O(1) - Only a constant amount of extra space is used.
*/
