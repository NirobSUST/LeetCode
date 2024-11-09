class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Initialize ans to store the result and shift to represent the current bit position (starting with the least significant bit)
        unsigned int ans = 0, shift = 1;

        // Loop through all 32 bit positions (assuming 32-bit integers)
        for (int i = 0; i < 32; i++) {
            int count = 0;
            
            // Count the number of 1s at the current bit position across all numbers
            for (auto x : nums) {
                if (x & shift) {
                    count++; // If the bit at the current position is 1, increment the count
                }
            }

            // If the count of 1s is not divisible by 3, then this bit must be set in the result (because the single number occurs once)
            if (count % 3) {
                ans += shift;
            }

            // Move to the next bit position (shift left by 1)
            shift *= 2;
        }
        // if (ans >= (1 << 31))
        //     ans -= (1 << 32); 

        // Return the result
        return ans;
    }
};

/*
Time Complexity: O(32 * n) = O(n)
    - We iterate through each of the 32 bits for each number in the input array.
    - For each bit position, we iterate through all elements in the array, so the total time complexity is linear, O(n).

Space Complexity: O(1)
    - The algorithm uses a constant amount of extra space to store the variables `ans`, `shift`, and `count`, regardless of the size of the input.
*/
