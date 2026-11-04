class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit{};
        int buy{0};
        int sell{1};
        while(sell < prices.size()){
            if(prices[buy] < prices[sell]){
                int profit = prices[sell] - prices[buy];
                maxProfit = max(profit, maxProfit);
            }else{
                buy = sell;
            }
            sell++;
        }
        return maxProfit;
    }
};
