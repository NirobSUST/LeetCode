class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Initialize profit to accumulate the total profit
        int profit = 0;

        // Iterate through the price list starting from the second day
        for (int i = 1; i < prices.size(); i++) {
            // If there's a positive price difference between consecutive days, add it to profit
            if (prices[i] - prices[i - 1] > 0)
                profit += (prices[i] - prices[i - 1]);
        }

        // Return the accumulated profit
        return profit;
    }
};

/*
Time Complexity: O(n)
   - We iterate through the array once, so the time complexity is linear.

Space Complexity: O(1)
   - Only a constant amount of extra space is used (for the profit variable).
*/
