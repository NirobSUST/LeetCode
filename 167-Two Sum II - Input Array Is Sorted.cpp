class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // Initialize two pointers: one at the beginning and the other at the end of the array
        int left = 0;
        int right = numbers.size() - 1;

        // Continue searching while left pointer is less than right pointer
        while (left < right) {
            // Calculate the sum of the two numbers pointed to by the pointers
            int sum = numbers[left] + numbers[right];

            // If the sum is greater than the target, move the right pointer leftward
            if (sum > target)
                right--;

            // If the sum is less than the target, move the left pointer rightward
            else if (sum < target)
                left++;

            // If the sum equals the target, return the indices (1-based)
            else if (sum == target)
                return {left + 1, right + 1};
        }

        // Return an empty vector if no pair is found
        return {};
    }
};

/*
Time Complexity: O(n)
    - The algorithm uses two pointers, and each pointer only traverses the array once, making the time complexity linear, i.e., O(n).

Space Complexity: O(1)
    - The algorithm uses a constant amount of extra space, as it only needs a few variables (`left`, `right`, and `sum`), and no additional data structures are used.
*/
