class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();

        vector<vector<int>> result (row, vector<int>(col, INT_MAX - 1));

        // top-left to bottom-right
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (mat[i][j] == 0)
                {
                    result[i][j] = 0;
                }
                else
                {
                    if (i > 0)
                    {
                        result[i][j] = min(result[i][j], result[i - 1][j] + 1);
                    }
                    if (j > 0)
                    {
                        result[i][j] = min(result[i][j], result[i][j - 1] + 1);
                    }
                }
            }
        }

        // bottom-right to top-left
        for (int i = row - 1; i >= 0; i--)
        {
            for (int j = col - 1; j >= 0; j--)
            {
                if (mat[i][j] != 0)
                {
                    if (i < row - 1)
                    {
                        result[i][j] = min(result[i][j], result[i + 1][j] + 1);
                    }
                    if (j < col - 1)
                    {
                        result[i][j] = min(result[i][j], result[i][j + 1] + 1);
                    }
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