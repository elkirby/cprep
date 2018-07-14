#include <vector>

using namespace std;

int maxProfit(const vector<int>& prices) {
	if (prices.size() < 2) {
		return 0;
	}

	int minPrice = prices[0];
	int maxProfit = prices[1] - prices[0];

	for (size_t i = 1; i < prices.size(); ++i) {
		int currentPrice = prices[i];
		int potentialProfit = currentPrice - minPrice;		

		maxProfit = max(maxProfit, potentialProfit);
		minPrice = min(minPrice, currentPrice);
	}

	return maxProfit;
}
