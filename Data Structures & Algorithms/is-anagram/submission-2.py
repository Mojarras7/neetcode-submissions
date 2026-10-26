class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        maps = {}
        mapt = {}

        if len(s) != len(t):
            return False

        for i in range(len(s)):
            if s[i] in maps:
                maps[s[i]] += 1
            else:
                maps[s[i]] = 1

            if t[i] in mapt:
                mapt[t[i]] += 1
            else:
                mapt[t[i]] = 1

        print(maps)
        print(mapt)

        return maps == mapt
