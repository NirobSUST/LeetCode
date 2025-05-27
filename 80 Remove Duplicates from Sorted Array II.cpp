class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int res = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
                count++;
            else
                count = 1;

            if (count <= 2)
            {
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};
/*
Time complexity: O(n)

Space complexity: O(1)
*/