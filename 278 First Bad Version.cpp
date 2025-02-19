// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int start = 1;
        long int end = n;
        long int mid;

        while (start <= end)
        {
            mid = start + (end - start) / 2;

            if (isBadVersion(mid))   end = mid - 1;
            else    start = mid + 1;

            if (isBadVersion(mid) && !isBadVersion(mid - 1)) return mid;
        }
        return 1;
    }
};
/*
Time Complexity     -> O(N)
Space Complexity    -> O(1)
*/