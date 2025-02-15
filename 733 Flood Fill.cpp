class Solution {
public:

    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int row, int col, int sourceColor)
    {
        if (sr < 0 || sr >= row || sc < 0 || sc >= col)  return;
        else if (image[sr][sc] != sourceColor)  return;

        image[sr][sc] = color;

        dfs(image, sr - 1, sc, color, row, col, sourceColor);
        dfs(image, sr + 1, sc, color, row, col, sourceColor);
        dfs(image, sr, sc - 1, color, row, col, sourceColor);
        dfs(image, sr, sc + 1, color, row, col, sourceColor);

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] == color) return image;
        int row = image.size();
        int col = image[0].size();
        int sourceColor = image[sr][sc];

        dfs(image, sr, sc, color, row, col, sourceColor);

        return image;

    }
};
/*
Time Complexity: O(N*M)
Space Complexity: O(1) / O(N*M) (worst case recursion stack for a completely filled region)
*/
