class Solution:
    def smallest_even_multiple(self, n: int) -> int:
        return n if (n & 1) == 0 else n * 2  