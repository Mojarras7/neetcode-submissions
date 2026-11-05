class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        maxprice = 0
        lowest = 100
        for i in range(len(prices)):
            lowest = min(lowest, prices[i])
            price = prices[i] - lowest
            maxprice = max(maxprice, price)

        return maxprice
