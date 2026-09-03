class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int minPrice = prices[0];
        int ans = 0;

        for(int i = 1; i < n; i++){
            ans = max(ans, prices[i] - minPrice);
            minPrice = minPrice > prices[i] ? prices[i] : minPrice;
        }

        return ans;
    }
};