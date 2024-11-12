class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        // Get the length of the array
        int len = nums.size();
        
        // Place each number in its correct position if it's within the range [1, len]
        for (int i = 0; i < nums.size(); i++) {
            // Check if the current number is within the range
            if (nums[i] >= 1 && nums[i] <= len) {
                // Calculate the correct position for the current number
                int pos = nums[i] - 1;

                // If the current number is not already in its correct position, swap it
                if (nums[pos] != nums[i]) {
                    swap(nums[pos], nums[i]);
                    // Decrement i to recheck the new number at the current position
                    i--;
                }
            }
        }

        // After placing all numbers in their correct positions, check for the first missing positive
        for (int i = 0; i < len; i++) {
            // If a position does not contain the expected number, return that index + 1 as the answer
            if (nums[i] != i + 1)
                return i + 1;
        }

        // If all positions contain the correct numbers, the missing positive is len + 1
        return len + 1;
    }
};

/*
Time Complexity: O(n)
   - The loop iterates through the array, performing swaps that can result in each element being moved only once.

Space Complexity: O(1)
   - The function only uses a constant amount of extra space.
*/
