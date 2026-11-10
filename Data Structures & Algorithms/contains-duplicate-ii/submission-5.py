class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        s = {} 
        L = 0
        for R in range( len(nums)):
            if k == 0: return False
            if R - L  > k:
                s.pop(nums[L])
                L += 1

            if nums[R] in s: return True

            s[nums[R]] = 1

        return False