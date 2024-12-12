class Solution {
public:
    int strStr(string haystack, string needle) {
        int l = needle.length();
        if (l == 0) return 0; 

        if(needle.length()>haystack.length()){ return -1;}

        for (int i = 0; i <= haystack.length() - l; i++) {
            string temp = haystack.substr(i, l); 

            if (temp == needle) {
                // match ho hya to jidhar se us ka index start hua tha
                return i; 
                }
        }
        return -1; // agar na match hua to -1
    }
};
