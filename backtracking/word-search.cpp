class Solution {
public:
    bool dfsWordSearch(vector<vector<char>>& arr, string word, int index, int i, int j) {
        if (index == word.size()) {
            return true;
        }

        if (i < 0 || i >= arr.size()) {
            return false;
        }

        if (j < 0 || j >= arr[0].size()) {
            return false;
        }
        if (arr[i][j] != word[index]) {
            return false;
        }

        char temp = arr[i][j];
        arr[i][j] = '#';

        bool found = dfsWordSearch(arr, word, index + 1, i + 1, j) ||
            dfsWordSearch(arr, word, index + 1, i, j + 1) ||
            dfsWordSearch(arr, word, index + 1, i - 1, j) ||
            dfsWordSearch(arr, word, index + 1, i, j - 1);

        arr[i][j] = temp;
        return found;    

    }

    bool exist(vector<vector<char>>& arr, string word) {
        int row = arr.size();
        int col = arr[0].size();

        cout << "ss " << row << " " << col << endl;
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (dfsWordSearch(arr, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }


};