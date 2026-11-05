class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        maxprice = 0
        for i in range(len(prices)):
            k = i + 1
            while k < n:
                price = prices[k] - prices[i]
                maxprice = max(maxprice, price)
                k += 1
        
        return maxprice