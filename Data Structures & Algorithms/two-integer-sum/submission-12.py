class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}

        for i in range(len(nums)):
            map[nums[i]] = i

        print(map)
        for i in range(len(map)):
            rest = target - nums[i]
            if rest in map and i != map[rest]:
                return[i,map[rest]]

        return [0,0]