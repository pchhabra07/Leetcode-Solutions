class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int profit = 0;
        int curProfit = 0;

        for(int i = 1; i < n; i++){
            if(prices[i] >= prices[i-1]){
                curProfit += prices[i] - prices[i-1];
            }
            else{
                profit += curProfit;
                curProfit = 0;
            }
        }
        return profit + curProfit;

    }
};