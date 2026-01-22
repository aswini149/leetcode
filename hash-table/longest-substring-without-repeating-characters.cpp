class Solution {
public:
    int lengthOfLongestSubstring(string input) {
        unordered_set<char> set;
        int maxCount = 0;
        int start = 0;
        //int count = 0;

        for (int i = 0; i < input.size(); i++) {

            while (set.count(input[i]) != 0) {
                set.erase(input[start]);
                start++;
            }

            set.insert(input[i]);
            maxCount = max(maxCount, i - start + 1);
        }
        return maxCount;
    }
};