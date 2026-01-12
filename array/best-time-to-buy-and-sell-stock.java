class Solution {
    public int maxProfit(int[] prices) {
        if(prices == null || prices.length < 2) return 0;
        
        int currentBuyPrice = prices[0];
        
        int maxProfit = Integer.MIN_VALUE;
        
        for(int i = 1; i < prices.length; i++) {
            currentBuyPrice = Math.min(currentBuyPrice, prices[i]);
            maxProfit = Math.max(maxProfit, prices[i] - currentBuyPrice);
        }
        
        return maxProfit;
    }
}