import collections

class Solution:
    def num_identical_pairs(self, nums: List[int]) -> int:
        return sum(c * (c - 1) // 2 for c in Counter(nums).values())