class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> track;

        for (char i : magazine)
        {
            track[i]++;
        }
        for (char i : ransomNote)
        {
            if (track[i] <= 0)   return false;
            track[i]--;
        }
        return true;
    }
};
/*
Time Complexity -> O(N + M)
Space Complexity -> O(Σ) (where Σ is the number of unique characters in magazine)
*/