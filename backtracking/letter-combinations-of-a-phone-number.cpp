class Solution {
public:
    vector<string> letterCombinations(string num) {
        vector<string> result;
        if (num.empty()) {
            return result;
        }
        unordered_map<char, string> map = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        int index = 0;
        string backtrackCombination = "";
        backtrackDigits(result, index, backtrackCombination, num, map);

        return result;
    }

    void backtrackDigits(vector<string>& result, int index, string combination, string num, unordered_map<char, string>& map) {
        if (num.length() == index) {
            result.push_back(combination);
            return;
        }

        string letters = map.at(num[index]);
        for (int i = 0; i < letters.size(); i++) {
            backtrackDigits(result, index + 1, combination + letters[i], num, map);
        }
    }
};