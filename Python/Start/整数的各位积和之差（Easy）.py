class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        ans_mul = 1
        ans_plus = 0
        while(n):
            ans_mul *= n % 10
            ans_plus += n % 10
            n //= 10
        return ans_mul - ans_plus