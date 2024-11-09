class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Initialize a vector to store the triplets that sum to zero
        vector<vector<int>> ans;

        // Sort the input array to enable two-pointer approach
        sort(nums.begin(), nums.end());

        // Iterate over the array with the first pointer
        for (int i = 0; i < nums.size(); i++) {
            // Skip duplicate elements to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            // Set up two pointers, one at the next element and one at the end
            int left = i + 1;
            int right = nums.size() - 1;

            // Use two-pointer technique to find pairs that sum up to the negative of nums[i]
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // If the sum is greater than zero, move the right pointer left
                if (sum > 0)
                    right--;

                // If the sum is less than zero, move the left pointer right
                else if (sum < 0)
                    left++;

                // If a valid triplet is found, add it to the answer
                else {
                    ans.push_back({nums[i], nums[left], nums[right]});

                    // Move left pointer to the right and skip duplicates
                    left++;
                    while (nums[left] == nums[left - 1] && left < right)
                        left++;
                }
            }
        }

        // Return all unique triplets that sum to zero
        return ans;
    }
};

/*
Time Complexity: O(n^2)
    - Sorting takes O(n log n)
    - For each element, two-pointer scan takes O(n)
    - Overall, the complexity is dominated by O(n^2)

Space Complexity: O(1) (excluding output)
    - Only a fixed amount of extra space is used; the answer vector itself is required output
*/
