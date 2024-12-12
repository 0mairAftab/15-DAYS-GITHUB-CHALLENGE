class Solution {
public:
    void sortColors(vector<int>& nums) {
      
      
        int count0=0;
        int count1=0;
        int count2=0;

        for (int n:nums){
            if (n==0) count0++;

            if(n==1) count1++;

            if(n==2) count2++;


        }

         nums.clear();

        for(int i=0;i<count0;i++){
           nums.push_back(0);
        }
        
        for(int j=0;j<count1;j++){
         nums.push_back(1);
        }

        for(int k=0;k<count2;k++){
          nums.push_back(2);
        }
    }
};