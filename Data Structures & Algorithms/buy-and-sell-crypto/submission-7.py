class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        n = len(prices)
        maxprice = 0
        l, r = 0, 1
        while r < n:
            if prices[r] > prices[l]:
                price = prices[r] - prices[l]
                maxprice = max(maxprice, price)
            else: l = r
            r += 1



        return maxprice
