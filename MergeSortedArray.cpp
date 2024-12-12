class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) {
        
        num1.insert(num1.end(),num2.begin(),num2.end());

        for(int i=0;i<(m+n)-1;i++){
            if(num1[i]>num1[i+1]){
                int temp=num1[i];
                num1[i]=num1[i+1];
                num1[i+1]=temp;
            }
        }
    }
};