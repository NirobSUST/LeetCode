class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Create an unordered map to store numbers and their indices
        unordered_map<int, int> seen;

        // Iterate over each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // Calculate the remainder needed to reach the target
            int rem = target - nums[i];

            // Check if the remainder is already in the map
            if (seen.find(rem) != seen.end()) {
                // If found, return the indices of the remainder and current number
                return {seen[rem], i};
            }

            // If not found, store the current number and its index in the map
            seen[nums[i]] = i;
        }

        // Return an empty vector if no pair is found (though problem constraints assume a solution exists)
        return {};
    }
};

/*
Time Complexity: O(n)
Space Complexity: O(n)
*/
