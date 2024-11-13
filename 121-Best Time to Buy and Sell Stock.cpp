class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize two pointers: L for the buy day, R for the sell day
        int L = 0, R = 1;
        
        // Initialize maxProfit to store the maximum profit found
        int maxProfit = 0;

        // Iterate while the right pointer is within the array bounds
        while (R < prices.size()) {
            // If the price at R is less than price at L, update L to R
            if (prices[R] < prices[L]) {
                L = R; // Update L to potentially buy at a lower price

            } else {
                // Calculate the potential profit and update maxProfit if it's higher
                maxProfit = max(maxProfit, prices[R] - prices[L]);
            }
            // Move the R pointer to the next day
            R++;
        }
        
        // Return the maximum profit that can be achieved
        return maxProfit;
    }
};

/*
Time Complexity: O(n)
   - We traverse the list once with two pointers, so the time complexity is linear.

Space Complexity: O(1)
   - Only a constant amount of extra space is used (for variables L, R, and maxProfit).
*/
