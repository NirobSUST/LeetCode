class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Initialize index (idx) of the current candidate and count
        int idx = 0, count = 1;

        // Traverse through each element in the array
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is the same as the candidate, increment the count
            if (nums[idx] == nums[i])
                count++;
            else
                // Otherwise, decrement the count
                count--;
            
            // If the count reaches zero, select the current element as the new candidate
            if (count == 0) {
                idx = i;
                count = 1;
            }
        }
        
        // The candidate at index idx is the majority element
        return nums[idx];
    }
};

/*
Boyer-Moore Majority Voting Algorithm
Time Complexity: O(n)
   - We traverse the array once, making the time complexity linear.

Space Complexity: O(1)
   - Only a constant amount of extra space is used (for variables idx and count).
*/
