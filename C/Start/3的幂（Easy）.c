typedef enum
{
    false,
    true
}bool;

bool is_power_Of_Three(int n) 
{
    return n > 0 && 1162261467 % n == 0;
}