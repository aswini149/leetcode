class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string res;

        while (i < word1.length() && j < word2.length()) {
            char c1 = word1[i];
            char c2 = word2[j];
            res.push_back(c1);
            res.push_back(c2);
            i++;
            j++;
        }

        while (i < word1.length()) {
            char c1 = word1[i];
            res.push_back(c1);
            i++;
        }

        while (j < word2.length()) {
            char c2 = word2[j];
            res.push_back(c2);
            j++;
        }

        return res;
    }
};