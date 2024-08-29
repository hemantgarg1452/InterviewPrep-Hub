package Arrays;

public class BuySellStocks {
    public static void main(String[] args) {
        int[] prices = { 7, 6, 4, 3, 1 };
        System.out.println(maxProfit(prices));
    }

    private static int maxProfit(int[] prices) {
        int buyPrice = prices[0];
        int maxProfit = 0;

        for (int currPrice : prices) {
            if (buyPrice > currPrice) {
                buyPrice = currPrice;
            }

            maxProfit = Math.max(maxProfit, currPrice - buyPrice);
        }
        return maxProfit;
    }
}
