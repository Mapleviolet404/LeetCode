class Solution 
{
public:
    int add_digits(int num) 
    {
        return (num - 1) % 9 + 1;    
    }
};