class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        s = {} 
        L = 0
        while L < len(nums):
            R = L + 1
            while R < min(len(nums), L + k + 1):
                if nums[R] == nums[L]: return True
                R +=1 
            L +=1
        return False