class Solution:
    def xor_operation(self, n: int, start: int) -> int:
        temp = start
        for i in range(n - 1):
            start ^= temp + 2
            temp += 2
        return start