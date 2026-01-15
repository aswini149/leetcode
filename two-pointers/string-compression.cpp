class Solution {
public:
    int compress(vector<char>& chars) {
        if (chars.size() == 1) {
            return 1;
        }
        int left = 0;
        //int totalCount = 0;
        int i = 0;
        while (i < chars.size()) {
            int count = 0;
            char currentChar = chars[i];

            while (i < chars.size() && currentChar == chars[i]) {
                count++;
                i++;
            }

            chars[left++] = currentChar;

            if (count > 1) {
                for (char c : std::to_string(count)) {
                    chars[left] = c;
                    left++; 
                }
            }
            //std::cout << count << " count ";

            /*if (chars[left] != chars[right]) {
                int count = right - left + 1;
                cout << "count " << count << endl;
                left++;
                totalCount++;
                chars[left] = (count - 1) + '0';
                left = right;
            }*/
        }
        for (auto x : chars) {
            std::cout << x << " -- ";
        }
        /*cout << endl;
        int lastCount = chars.size() - left + 1;
        cout << "Left char count " << left << endl;
        cout << "Last char count " << lastCount << endl;
        chars[left + 1] = lastCount + '0';
        for (auto x : chars) {
            std::cout << x << " ";
        }*/
        return left;
    }
};