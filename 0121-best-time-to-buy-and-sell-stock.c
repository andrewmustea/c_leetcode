/**
 * You are given an array prices where prices[i] is the price of a given stock
 * on the ith day.
 *
 * You want to maximize your profit by choosing a single day to buy one stock
 * and choosing a different day in the future to sell that stock.
 *
 * Return the maximum profit you can achieve from this transaction. If you
 * cannot achieve any profit, return 0.
 *
 * Constraints:
 *
 * 1 <= prices.length <= 10^5
 * 0 <= prices[i] <= 10^4
 *
 * Space: O(1)
 * Time: O(n)
 */

int maxProfit(int* prices, int pricesSize) {
    int max_profit = 0;
    int lowest_price = prices[0];
    int current_profit = 0;

    for (int i = 1; i < pricesSize; ++i) {
        current_profit = prices[i] - lowest_price;
        if (prices[i] < lowest_price)
            lowest_price = prices[i];
        else if (current_profit > max_profit)
            max_profit = current_profit;
    }

    return max_profit;
}
