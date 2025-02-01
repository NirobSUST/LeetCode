class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1 )   return x;

        long left = 1;
        long right = x / 2;
        long result;

        while (left <= right)
        {
            long mid = left + (right - left) / 2;

            if (mid * mid == x) return mid;
            else if (mid * mid < x)
            {
                left = mid + 1;
                result = mid;
            }
            else    right = mid - 1;
        }
        return result;
    }
};

/*
Approach: Binary Search
Time Complexity: O(log N)
Space Complexity: O(1)
*/