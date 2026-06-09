class Solution {
public:
    std::string intToRoman(int num) {
        // Define values and symbols in descending order
        // Including subtraction cases like 900 (CM), 400 (CD), etc.
        const std::vector<std::pair<int, std::string>> mapping = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        std::string result = "";
        
        for (const auto& pair : mapping) {
            // While the current integer is greater than or equal to the value
            while (num >= pair.first) {
                result += pair.second;
                num -= pair.first;
            }
        }
        
        return result;
    }
};