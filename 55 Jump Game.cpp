class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIdx = 0;

        for (int i = 0; i < nums.size() && i <= maxIdx; i++)
        {
            maxIdx = max(maxIdx, i + nums[i]);

            if (maxIdx >= nums.size() - 1)
                return true;
        }
        return false;
    }
};
/*
Time Complexity: O(n)
Space Complexity: O(1)
*/