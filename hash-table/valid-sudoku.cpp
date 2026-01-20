class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> seen;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                char c = board[i][j];
                if (c == '.') {
                    continue;
                }

                string rowString = "row - " + to_string(i) + " -" + c;
                string colString = "col - " + to_string(j) + " -" + c;

                int index = (((i / 3) * 3) + (j / 3));

                string boxString = "box - " + to_string(index) + " -" + c;

                if (seen.count(rowString) || seen.count(colString) || seen.count(boxString)) {
                    cout << " returning false " << endl;
                    return false;
                }

                seen.insert(rowString);
                seen.insert(colString);
                seen.insert(boxString);
            }
        }
        return true;
    }
};