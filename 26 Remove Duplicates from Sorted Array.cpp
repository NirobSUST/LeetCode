class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int left = 0, right = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            if (right >= nums.size())    break;
            if (nums[left] == nums[right])
            {
                right++;
            }
            else
            {
                nums[++left] = nums[right];
                right++;
            }
        }
        return left + 1;
    }
};
/*
Time Complexity : O(N)
Space Complexity : O(1)
*/