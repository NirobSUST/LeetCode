class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        double res = nums[0];
        double total = nums[0];
 
        for(int i = 1; i < nums.size(); i++)
        {
            total += nums[i];
            res = std::max(res, ceil(total/ (i+1)));
        }
        return res;
    }
};