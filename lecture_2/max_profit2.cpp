int maxProfit(vector<int>& prices) {
    int min = prices[0], max = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); ++i) {
        if (prices[i - 1] > prices[i]) {
            profit += max - min;
            min = prices[i];
            max = min;
        }

        max = std::max(max, prices[i]);
    }

    return profit + max - min;
}
