class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int it = 0; // Initialize a pointer to keep track of the position to place the next valid element

        // Loop through each element in the nums vector
        for (int i = 0; i < nums.size(); i++) // i is the current index in the array
        {
            if (nums[i] != val) // Check if the current element is not equal to the value to be removed
            {
                nums[it] = nums[i]; // If not equal, copy the element to the 'it' position
                it++; // Move the 'it' pointer to the next position
            }
            // If nums[i] == val, we skip copying it, effectively removing it from the result
        }

        return it; // Return the new length of the array without the 'val' elements
    }
};
/*
Time complexity -> O(N)
Space Complecity -> O(1)
*/