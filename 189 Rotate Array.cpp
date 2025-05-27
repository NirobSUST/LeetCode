class Solution {
    void rev(int left, int right, vector<int>& nums )
    {
        while (left < right)
        {
            swap(nums[left], nums[right]);
            left++;
            right--;
        }
    }
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k %= len;
        rev(0, len - 1, nums);
        rev(0, k - 1, nums);
        rev(k, len - 1, nums);
    }
};