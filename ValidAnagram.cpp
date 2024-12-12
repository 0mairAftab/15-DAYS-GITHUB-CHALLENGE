class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length()!=t.length()) return false;

        string temp1=s;
        string temp2=t;

        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());

        if(temp1==temp2) return true;
        
        
        
         return false;
        
    }
};