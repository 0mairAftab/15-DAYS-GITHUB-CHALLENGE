class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {
            cout << "empty";
            return 0;
        }

        int minPrice = INT_MAX; 
        int maxProfit = 0;

        for (int i = 0; i < prices.size(); i++) {
            
            if (prices[i] < minPrice) {
                minPrice = prices[i];}

            int profit = prices[i] - minPrice;
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }

        return maxProfit;
    }
};
