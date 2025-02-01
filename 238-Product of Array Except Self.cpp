class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> result(len, 1);

        int prefixProd = 1;
        for (int i = 0; i < len; i++)
        {
            result[i] = prefixProd;
            prefixProd *= nums[i];
        }
        int suffixProd = 1;
        for (int i = len - 1; i >= 0; i--)
        {
            result[i] *= suffixProd;
            suffixProd *= nums[i];
        }
        return result;
    }
};

/*
Approach: Prefix-Suffix Product
Time Complexity: O(N)
Space Complexity: O(1) (excluding the output space)
*/