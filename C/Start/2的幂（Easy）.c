typedef enum
{
    false,
    true
}bool;

bool is_power_of_two(int n) 
{
    if (n <= 0) return false;
    else for (long i = 1; i <= n; i *= 2) if (i == n) return true;
    return false;
}