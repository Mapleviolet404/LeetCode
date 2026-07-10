#include <vector>

class Solution 
{
public:
    int peak_index_in_mountain_array(std::vector<int>& arr) 
    {
        int left = 1, right = arr.size() - 2;
        while (right > left + 1)
        {
            int mid = (left + right) / 2;
            if (arr[mid + 1] > arr[mid]) left = mid;
            else right = mid;
        }
        return arr[left] >= arr[right] ? left : right;
    }
};