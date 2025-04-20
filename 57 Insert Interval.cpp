class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int i = 0;
        int n = intervals.size();

        /*
        intervals = [ [1,2],[3,4], [5,7],[8,10], [12,16]]  newInterval = [6,8]
                      -----------  ------------  --------
                      Left non-OL     OL          Right non-OL

                                   5-----7  8----10
                                       6----8
                               min=5         max=10
            res =   [ [1,2],[3,4],      [5,10],     [12,16] ]
        */

        // Left non-overlapping intervals
        while (i < n && intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
            i++;
        }

        // Overlapping intervals
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]);
            newInterval[1] = max(newInterval[1], intervals[i][1]);
            i++;
        }
        res.push_back(newInterval);

        // Right non-overlapping intervals
        while (i < n) {
            res.push_back(intervals[i]);
            i++;
        }

        return res;
    }
};
/*
Time Complexity = O(N)
Space Complexity = O(N)
*/