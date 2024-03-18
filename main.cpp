
#include <stdio.h>
#include <limits.h>

int maxProfit(int* prices, int pricesSize) {
    if (pricesSize <= 1) {
        return 0; // If there are no or only one day, no profit can be made
    }

    int minPrice = INT_MAX;
    printf("%d",minPrice); // Initialize the minimum price to the maximum possible value
    int maxProfit = 0;      // Initialize the maximum profit to 0

    for (int i = 0; i < pricesSize; i++) {
        // Update the minimum price encountered so far
        minPrice = (prices[i] < minPrice) ? prices[i] : minPrice;

        // Update the maximum profit if selling at the current day's price yields a better profit
        maxProfit = (prices[i] - minPrice > maxProfit) ? prices[i] - minPrice : maxProfit;
    }

    return maxProfit;
}


int main() {
    int prices1[] = {1, 9, 0, 6, 3, 6, 4};
    int n1 = sizeof(prices1) / sizeof(prices1[0]);
    printf("Example 1: %d\n", maxProfit(prices1, n1));

    int prices2[] = {7, 6, 4, 3, 1};
    int n2 = sizeof(prices2) / sizeof(prices2[0]);
    printf("Example 2: %d\n", maxProfit(prices2, n2));

    return 0;
}
