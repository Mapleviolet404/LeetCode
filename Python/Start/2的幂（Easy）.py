class Solution:
    def is_power_of_two(self, n: int) -> bool:
        if n <= 0: 
            return False
        else:
            if n & n - 1 == 0:
                return True
            else:
                return False