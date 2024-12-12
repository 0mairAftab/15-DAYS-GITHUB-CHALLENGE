class Solution {
public:
    string reverseStr(string s, int k) {

string str;
        for(int i=k-1;i>=0;i--){
            str+=s[i];
        }

        for (int j=k;j<2*k;j++){
            str+=s[j];
        }

        if(s.length()-(2*k)<k){
            for(int l=s.length();l>(2*k);l--){
                str+=s[l];
            }
        }


       if (s.length() - (2 * k) < k && s.length() - (2 * k) >= 0) {
    for (int i = s.length() - 1; i >= 2 * k; i--) {
        str += s[i];
    }
} else if (s.length() - (2 * k) >= k && s.length() - (2 * k) < 2 * k) {
    for (int i = (2 * k) + k - 1; i >= 2 * k; i--) {
        str += s[i];
    }
    for (int y = (2 * k) + k; y < s.length(); y++) {
        str += s[y];
    }
}
        return str;
    }
};