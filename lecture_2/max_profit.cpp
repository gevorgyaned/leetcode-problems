#include <vector>

int maxProfit(std::vector<int> const &prices) {
    int max_profit = 0;
    int min = prices[0];

    for (auto price : prices) {
        min = std::min(min, price);
        max_profit = std::max(max_profit, price - min);
    }

    return max_profit;
}
