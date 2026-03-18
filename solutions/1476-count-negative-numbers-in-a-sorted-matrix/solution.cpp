class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int row = 0;
        int col = m - 1;

        int count = 0;

        while (row < n && col >= 0) {
            int curr = grid[row][col];

            if (curr < 0) {
                count = count + (n - row);
                col = col - 1;
            } else {
                row = row + 1;
            }
        }

        return count;
    }
};
