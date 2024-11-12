class Solution {
    // Helper function to determine if the element is the start of a sequence
    bool isFirstElement(unordered_set<int> &check, int ele) {
        // Check if the previous element (ele - 1) is not in the set
        return check.count(ele - 1) == 0;
    }

public:
    int longestConsecutive(vector<int>& nums) {
        // Use an unordered set for fast lookups and to eliminate duplicates
        unordered_set<int> check(nums.begin(), nums.end());
        
        // Variable to store the length of the longest consecutive sequence
        int longestSeq = 0;

        // Iterate over each unique element in the set
        for (auto x : check) {
            // Check if this element is the beginning of a sequence
            if (isFirstElement(check, x)) {
                int currEle = x;
                
                // Count the consecutive elements starting from x
                while (check.count(currEle)) {
                    currEle++;
                }

                // Update longest sequence length if current sequence is longer
                longestSeq = max(longestSeq, currEle - x);
            }
        }
        
        // Return the longest consecutive sequence found
        return longestSeq;
    }
};

/*
Time Complexity: O(n) - We iterate through each element, and each consecutive sequence is counted in a single pass.
Space Complexity: O(n) - An unordered set is used to store the elements, requiring additional space proportional to the input size.
*/
