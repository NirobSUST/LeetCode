class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialize the last index of the merged array
        int last = m + n - 1;

        // Merge elements from the end of nums1 and nums2
        while (n > 0 && m > 0) {
            // Compare the last elements of nums1 and nums2
            if (nums1[m - 1] > nums2[n - 1]) {
                // Place the larger element at the end of nums1
                nums1[last] = nums1[m - 1];
                m--;
            } else {
                // Place the larger element from nums2 at the end of nums1
                nums1[last] = nums2[n - 1];
                n--;
            }
            // Move to the next position in the merged array
            last--;
        }

        // If there are remaining elements in nums2, place them in nums1
        while (n > 0) {
            nums1[last] = nums2[n - 1];
            last--;
            n--;
        }
    }
};

/*
Time Complexity: O(m + n)
   - We iterate through both arrays, comparing and merging elements, resulting in linear time complexity.

Space Complexity: O(1)
   - The merge is done in-place without using extra space.
*/
