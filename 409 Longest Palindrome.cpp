class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> seen;
        int count = 0;

        for (char c : s)
        {
            if (seen.find(c) != seen.end())
            {
                seen.erase(c);
                count += 2;
            }
            else
            {
                seen.insert(c);
            }
        }
        seen.empty() ? count : count++;
        return count;
    }
};
/*
Time Complexity -> O(N)
Space Complexity -> O(Σ) (where Σ is the number of unique characters in s)
*/