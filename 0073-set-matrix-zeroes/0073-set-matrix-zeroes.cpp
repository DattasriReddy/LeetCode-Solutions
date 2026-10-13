
class Solution {
public:
    // CHANGE 1: Declare m and n here, initialize them inside setZeroes()
    int m, n;
    vector<vector<int>>* mat;

    void helper(int i, int j) {
        // CHANGE 2: Zero the column j
        for (int x = 0; x < m; x++) {
            (*mat)[x][j] = 0;
        }

        // CHANGE 3: Zero the row i
        for (int x = 0; x < n; x++) {
            (*mat)[i][x] = 0;
        }
    }

    void setZeroes(vector<vector<int>>& matrix) {
        // CHANGE 4: Initialize dimensions here
        m = matrix.size();
        n = matrix[0].size();
        mat = &matrix;

        // CHANGE 5: Store original zero positions first
        vector<pair<int, int>> zeros;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    zeros.push_back({i, j});
                }
            }
        }

        // CHANGE 6: Call helper after scanning the matrix
        for (auto [i, j] : zeros) {
            helper(i, j);
        }

        // CHANGE 7: Remove return matrix; because return type is void
    }
};
