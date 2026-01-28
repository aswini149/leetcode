class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        int arr1[26] = {0};
        int arr2[26] = {0};

        for (int i = 0; i < word1.length(); i++) {
            arr1[word1[i] - 'a']++;
        }

        for (int i = 0; i < word2.length(); i++) {
            arr2[word2[i] - 'a']++;
        }

        

        for (int i = 0; i < 26; i++) {
            // check for chars -- same chars should be available
            // for aabb and ccdd -- later if we sort it freq will look to be the same but same chars are not there
            if (arr1[i] == 0 && arr2[i] != 0) {
                return false;
            }
            if (arr2[i] == 0 && arr1[i] != 0) {
                return false;
            }
        }

        sort(arr1, arr1 + 26);
        sort(arr2, arr2 + 26);

        
        for (int i = 0; i < 26; i++) {
            if (arr1[i] != arr2[i]) {
                return false;
            }
        }

        return true;

    }
};