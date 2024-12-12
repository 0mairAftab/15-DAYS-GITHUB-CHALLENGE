#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()){

   return ""; 

        } 

        string prefix = strs[0]; // Start with the first string

        for (int i = 1; i < strs.size(); i++) { //first se start kren ge 0 index wala pehle use kiya hai

            while (strs[i].substr(0, prefix.size()) != prefix) { 
            // ab next string se aik aik element nikaalte rhen ge mean wo short hota jae ga jb tk complete ni o jata
                prefix = prefix.substr(0, prefix.size() - 1);

                if (prefix.empty()) return ""; 
            }
        }

        return prefix; 
    }
};
