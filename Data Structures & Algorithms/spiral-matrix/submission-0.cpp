class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix[0].size();

        int minrow = 0;
        int maxrow = m - 1;
        int mincolumn = 0;
        int maxcolumn = n - 1;

        int total_elements = m * n;
        int count = 0;

        vector<int> v;

        while (minrow <= maxrow && mincolumn <= maxcolumn) {

            // Right
            for (int j = mincolumn; j <= maxcolumn && count < total_elements; j++) {
                v.push_back(matrix[minrow][j]);
                count++;
            }
            minrow++;

            // Down
            for (int i = minrow; i <= maxrow && count < total_elements; i++) {
                v.push_back(matrix[i][maxcolumn]);
                count++;
            }
            maxcolumn--;

            // Left
            for (int j = maxcolumn; j >= mincolumn && count < total_elements; j--) {
                v.push_back(matrix[maxrow][j]);
                count++;
            }
            maxrow--;

            // Up
            for (int i = maxrow; i >= minrow && count < total_elements; i--) {
                v.push_back(matrix[i][mincolumn]);
                count++;
            }
            mincolumn++;
        }

        return v;
    }
};