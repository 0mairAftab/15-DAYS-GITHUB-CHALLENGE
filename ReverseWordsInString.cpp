class Solution {
public:
    string reverseWords(string s) {
          int start = 0;
        while (start < s.size() && s[start] == ' ') {
            start++;
        }
        int end = s.size() - 1;
        while (end >= start && s[end] == ' ') {
            end--;
        }
        
        std::vector<std::string> words;
        std::string word;
        for (int i = start; i <= end; i++) {
            if (s[i] != ' ') {
                word += s[i];  
            } else {
                if (!word.empty()) {
                    words.push_back(word);  
                    word.clear();  
                }
            }
        }
        
        if (!word.empty()) {
            words.push_back(word);
            }

        std::reverse(words.begin(), words.end());
        
        std::string result = "";

        for (int i = 0; i < words.size(); i++) {

            result += words[i];

            if (i < words.size() - 1) {
                result += " ";  
            }
        }
        
        return result;
    }
};