class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Initialize 'ans' to 0, which will store the result
        int ans = 0;

        // Iterate over each element in the input array
        for (auto x : nums) {
            // Apply XOR operation between 'ans' and the current element
            ans = ans ^ x;
        }

        // After XORing all elements, the result will be the number that appears only once
        return ans;
    }
};

/*
Time Complexity: O(n)
    - The function iterates through all the elements in the input array once, performing a constant-time XOR operation on each element.

Space Complexity: O(1)
    - The solution uses a constant amount of extra space, as only one variable (`ans`) is used to store the result.
*/
