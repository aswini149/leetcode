class Solution {
public:
    void setZeroes(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<bool> rowsBoolArr(rows, false);
        vector<bool> colsBoolArr(cols, false);



        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 0) {
                    rowsBoolArr[i] = true;
                    colsBoolArr[j] = true;
                }
            }
        }

        for (int j = 0; j < rowsBoolArr.size(); j++) {
                cout << " " << rowsBoolArr[j];
        }
        cout << endl;

        for (int j = 0; j < colsBoolArr.size(); j++) {
                cout << " " << colsBoolArr[j];
        }
        cout << endl;
        cout << endl;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowsBoolArr[i]) {
                    grid[i][j] = 0;
                }

                if (colsBoolArr[j]) {
                    grid[i][j] = 0;
                }
            }
        }
    }
};