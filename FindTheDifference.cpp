class Solution {
public:
    char findTheDifference(string s, string t) {

        for (int i = 0; i < t.size(); i++) {
        bool found = false;
        for (int j = 0; j < s.size(); j++) {

            if (t[i] == s[j]) {

                found = true;
                s[j] = '*'; // Marking this as used so cant be used again
                break;
            }
        }
        if (!found) {
            return t[i]; 
        }
    }
    return -1;  }
};