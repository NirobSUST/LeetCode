class RandomizedSet {
    unordered_map<int, int> myMap; // Stores the value and its index in the vector
    vector<int> vt; // Vector to store the elements

public:
    // Constructor initializes the empty set
    RandomizedSet() {}

    // Insert a value into the set. Returns true if insertion is successful, false if the value already exists
    bool insert(int val) {
        // Check if the value already exists in the map
        if (myMap.find(val) != myMap.end())
            return false; // Value already exists, so return false
        
        // Insert the value at the end of the vector
        vt.push_back(val);
        // Store the index of the value in the map
        myMap[val] = vt.size() - 1;
        return true;
    }

    // Remove a value from the set. Returns true if removal is successful, false if the value does not exist
    bool remove(int val) {
        // If the value does not exist in the map, return false
        if (myMap.find(val) == myMap.end())
            return false;
        
        // Get the index of the value to be removed
        auto it = myMap.find(val);
        // Replace the element to be removed with the last element in the vector
        vt[it->second] = vt.back();
        // Remove the last element from the vector
        vt.pop_back();
        // Update the map with the new index of the element that was moved
        myMap[vt[it->second]] = it->second;
        // Erase the element from the map
        myMap.erase(val);
        return true;
    }

    // Get a random element from the set
    int getRandom() {
        // Randomly select an element from the vector using modulo to ensure the index is within bounds
        return vt[random() % vt.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
