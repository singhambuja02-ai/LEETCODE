class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramMap;
        
        for (const std::string& s : strs) {
            std::string key = s;
            // Sorting the string creates the canonical form for all anagrams
            std::sort(key.begin(), key.end());
            anagramMap[key].push_back(s);
        }
        
        std::vector<std::vector<std::string>> result;
        for (auto& pair : anagramMap) {
            result.push_back(std::move(pair.second));
        }
        
        return result;
    }
};