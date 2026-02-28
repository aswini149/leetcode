class Solution {
public:
    int maxVowels(string s, int k) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int left = 0;
        int count = 0;
        int maxCount = 0;

        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (vowels.contains(c)) {
                count++;
            }

            if (i - left + 1 == k) {
                maxCount = max(maxCount, count);
                if (vowels.contains(s[left])) {
                    count--;
                }
                left++;
            }
        }
        return maxCount;
    }
};