#include <iostream>
#include <set>

class Solution {
public:
    std::string removeDuplicateLetters(std::string s) {
        std::set<char> included;
        std::string result;

        for (int i = 0; i < s.length(); ++i) {
            // Skip characters that are already in the result
            if (included.count(s[i]))
                continue;

            // Remove characters from the end of the result if they are greater
            // than the current character and they are present in the set
            while (!result.empty() && result.back() > s[i] && s.find(result.back(), i) != std::string::npos) {
                included.erase(result.back());
                result.pop_back();
            }

            included.insert(s[i]);
            result.push_back(s[i]);
        }

        return result;
    }
};