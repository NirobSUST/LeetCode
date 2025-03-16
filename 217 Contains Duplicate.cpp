class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Declare an unordered_set to store unique elements
        unordered_set<int> seen;

        // Iterate through each element in the array
        for (auto x : nums) {
            // If the element is already in the set, a duplicate is found
            if (seen.find(x) != seen.end())
                return true; // Return true immediately

            // Insert the element into the set
            seen.insert(x);
        }

        // If no duplicates are found, return false
        return false;
    }
};
/*
Time Complexity -> O(n)
Space Complexity -> O(n)
*/

/*
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Declare an unordered_map to store the frequency of each number
        unordered_map<int, int> duplicate;

        // Iterate through each element in the array
        for (auto x : nums) {
            duplicate[x]++; // Increment the count of the current element

            // If the count of any element reaches 2, return true (duplicate found)
            if (duplicate[x] == 2)
                return true;
        }

        // If no duplicates are found, return false
        return false;
    }
};

Time Complexity -> O(n)
Space Complexity -> O(n)


Why is unordered_set More Efficient Than unordered_map?
1. Memory Efficiency: unordered_set<int> stores only unique elements, whereas unordered_map<int, int> keeps key-value pairs (extra memory for counts).
2. Faster Lookup & Insertion: unordered_set operations (insert, find) are generally more efficient than unordered_map due to the lack of value storage.

*/