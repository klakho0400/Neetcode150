class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int buy = INT_MAX;

        for(int sell = 0; sell < prices.size(); sell++)
        {
            if(prices[sell]<buy)
            buy = prices[sell];

            ans = max(ans,prices[sell]-buy);
        }
        return ans;
    }
};