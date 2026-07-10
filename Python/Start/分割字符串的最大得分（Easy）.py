class Solution:
    def max_score(self, s: str) -> int:
        # ans = 0
        # for i in range(1, len(s)):
        #     score = 0
        #     for j in range(0, i):
        #         if s[j] == '0':
        #             score += 1
        #     for j in range(i, len(s)):
        #         if s[j] == '1':
        #             score += 1
        #     ans = max(score, ans)
        # return ans
        return max(s[:i].count('0') + s[i:].count('1') for i in range(1, len(s)))
