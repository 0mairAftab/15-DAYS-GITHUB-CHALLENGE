class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0 || (x % 10 == 0 && x != 0)){
            return false;
        }

        int a=x;
        int temp=0;


    while(a>0){

        if (temp > INT_MAX / 10) {
                return false;
            }
            
        temp=temp*10+(a%10);

        a=a/10;

    }

    if(x==temp){
        return true;
    }

    return false;

    }
};