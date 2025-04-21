class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>> result (row, vector<int>(col, -1));
        queue<pair<int, int>> que;
        vector<pair<int, int>> directions {{ -1, 0}, {1, 0}, {0, -1}, {0, 1}};

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (mat[i][j] == 0)
                {
                    result[i][j] = 0;
                    que.push({i, j});
                }
            }
        }
        while (!que.empty())
        {
            auto [i, j] = que.front();
            que.pop();

            for (auto [di, dj] : directions)
            {
                int newI = i + di;
                int newJ = j + dj;

                if (newI >= 0 && newI < row && newJ >= 0 && newJ < col && result[newI][newJ] == -1)
                {
                    result[newI][newJ] = result[i][j] + 1;
                    que.push({newI, newJ});
                }
            }
        }
        return result;
    }
};
/*
Time Complexity:    O(m*n)
Space Complexity:   O(m*n)
*/