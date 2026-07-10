class Solution:
    def count_good_triplets(self, arr: List[int], a: int, b: int, c: int) -> int:
        ans = 0
        arr_size = len(arr)
        for i in range(arr_size):
            for j in range(i + 1, arr_size):
                if abs(arr[i] - arr[j]) >a:
                    continue
                for k in range(j + 1, arr_size):
                    if abs(arr[j] - arr[k]) <= b and abs(arr[i] - arr[k]) <= c:
                        ans += 1
        return ans 