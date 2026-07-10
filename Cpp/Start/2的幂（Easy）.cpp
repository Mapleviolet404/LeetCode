class Solution 
{
public:
    bool is_power_of_two(int n) 
    {
        if (n <= 0) return false;
        else for (long i = 1; i <= n; i <<= 1) if (i == n) return true;
        return false;
    }
};