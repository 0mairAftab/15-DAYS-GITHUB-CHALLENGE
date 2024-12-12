class Solution {
public:
    int pivotIndex(vector<int>& nums) {
            int totalSum = 0, leftSum = 0;

    for (int num : nums) {
        totalSum += num;
    }

    for (int i = 0; i < nums.size(); i++) {

        //as Right sum is equal to total sum minus left sum minus the current element
        if (leftSum == totalSum - leftSum - nums[i]) {
            return i; 
        }

        leftSum += nums[i]; 
    }

    return -1; 
    }
};