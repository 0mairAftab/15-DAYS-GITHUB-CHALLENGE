class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        string temp2 = "";

        for (int i = s.length() - 1; i >= 0; i--) {
            if (isalnum(s[i])) {
                temp += tolower(s[i]);
            }
        }

        for (int j = 0; j < s.length(); j++) {
            if (isalnum(s[j])) {
                temp2 += tolower(s[j]);
            }
        }

        return temp2 == temp;
    }
};