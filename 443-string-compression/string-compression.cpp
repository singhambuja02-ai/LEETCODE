class Solution {
public:
    int compress(std::vector<char>& chars) {
        int write = 0; // Pointer to write the compressed result
        int read = 0;  // Pointer to scan through the array
        
        while (read < chars.size()) {
            char currentChar = chars[read];
            int count = 0;
            
            // Count occurrences of the current character
            while (read < chars.size() && chars[read] == currentChar) {
                read++;
                count++;
            }
            
            // Write the character
            chars[write++] = currentChar;
            
            // If count > 1, write the count as characters
            if (count > 1) {
                std::string countStr = std::to_string(count);
                for (char c : countStr) {
                    chars[write++] = c;
                }
            }
        }
        
        return write; // New length of the compressed array
    }
};