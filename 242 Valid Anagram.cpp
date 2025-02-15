class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())    return false;

        vector<int> frequency(26, 0);
        for (auto c : s)  frequency[c - 'a']++;
        for (auto c : t)  frequency[c - 'a']--;

        for (auto count : frequency)
        {
            if (count != 0)  return false;
        }

        return true;
    }
};
/*
Time Complexity: O(N)
Space Complexity: O(1)
*/