class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
         int m = matrix.size();
        int n = matrix[0].size();

       
        vector<bool> rowZero(m, false);
        vector<bool> colZero(n, false);

        // Mark rows and columns to be zeroed
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (matrix[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }

        // Zero out rows
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (rowZero[i] || colZero[j]) {
                    matrix[i][j] = 0;
                }
            }
        }

    }
};