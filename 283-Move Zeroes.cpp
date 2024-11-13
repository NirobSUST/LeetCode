class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Initialize snowBallSize to keep track of the number of zeros encountered
        int snowBallSize = 0;

        // Traverse through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is zero, increment the snowBallSize (count of zeros)
            if (nums[i] == 0) {
                snowBallSize++;
            } else {
                // If the current element is non-zero, swap it with the position
                // where the next non-zero element should go (i - snowBallSize)
                int temp = nums[i];
                nums[i] = 0;
                nums[i - snowBallSize] = temp;
            }
        }
    }
};

/*
Time Complexity: O(n)
   - We iterate through the array once, making swaps only when necessary, resulting in a linear time complexity.

Space Complexity: O(1)
   - Only a constant amount of extra space is used for variables (snowBallSize and temp).
*/