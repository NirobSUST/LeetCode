class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty())   return {};

        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b)
        {
            return a[0] < b[0];
        });
        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for (size_t i = 1; i < intervals.size(); i++)
        {
            vector<int>& last = result.back();

            if (intervals[i][0] <= last[1])
            {
                last[1] = max(last[1], intervals[i][1]);
            }
            else
            {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};

/*
Approach: Merging Intervals
Time Complexity: O(N log N)
Space Complexity: O(N)
*/