class Solution {
public:
    vector<bool> camelMatch(vector<string>& arr, string pattern) {
        //Optimal
        vector<bool> result(arr.size(), true);
        for (int i = 0; i < arr.size(); i++) {
            string& word = arr[i];
            int left = 0;

            for (char c : word) {
                if (left < pattern.size() && c == pattern[left]) {
                    left++;
                } else if(c >= 'A' && c <= 'Z') {
                    result[i] = false;
                    break;
                }
            }

            if (left != pattern.length()) {
                result[i] = false; 
            }
        }

        return result;

        //sub optimal
        /*vector<bool> result(arr.size());
        for(int j = 0; j < arr.size(); j++) {
            result[j] = true;
        }
        for(int j = 0; j < arr.size(); j++) {
            string word = arr[j];
            for (int i = 0; i < pattern.length(); i++) {
                char c = pattern[i];

                //word.erase(remove(word.begin(), word.end(), c), word.end());
                auto it = word.find(c);
                if (it != string::npos) {
                    word.erase(it, 1);
                } else {
                    result[j] = false;
                }
            }
            arr[j] = word;
        }

        for (int j = 0; j < arr.size(); j++) {
            //result[j] = true;
            string word = arr[j];
            cout << "arr " << word << endl; 
            for (int i = 0; i < word.length(); i++) {
                char c = word[i];

                if (c >= 'A' && c <= 'Z') {
                    result[j] = false;
                    break;
                }
            }
        }

        return result;*/
    }
};