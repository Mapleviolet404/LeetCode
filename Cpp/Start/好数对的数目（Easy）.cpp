#include <vector>
#include <algorithm>

class Solution 
{
public:
    int num_identical_pairs(std::vector<int>& nums) 
    {
        int match = 0;
        int ans = 0;
        std::sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); ++i)
        {
            if(i == nums.size() - 1) return ans;
            if(nums[i] == nums[i + 1]) match++;
            else match = 0;
            ans += match;
        }
        return -1;
    }
};