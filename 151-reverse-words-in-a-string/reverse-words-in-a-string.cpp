
class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string result = "";
        
        // Extract words and prepend them to the result string
        while (ss >> word) {
            if (result.empty()) {
                result = word;
            } else {
                result = word + " " + result;
            }
        }
        
        return result;
    }
};