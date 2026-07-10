class Solution:
    def is_power_of_three(self, n: int) -> bool:
        if n <= 0:
            return False
        else:
            i = 1
            while i <= n:
                if i == n:
                    return True
                i *= 3
        return False