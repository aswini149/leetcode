class Solution {
public:
    string intToRoman(int num) {
        std::vector<std::pair<std::string, int>> map = {
            {"M", 1000},
            {"CM", 900},
            {"D", 500},
            {"CD", 400},
            {"C", 100},
            {"XC", 90},
            {"L", 50},
            {"XL", 40},
            {"X", 10},
            {"IX", 9},
            {"V", 5},
            {"IV", 4},
            {"I", 1}
        };
        
        string builder;
        for (const auto& entry : map) {

            while (num >= entry.second) {
                builder.append(entry.first);
                num = num - entry.second;
            }
            
        }

        return builder;
    }
};