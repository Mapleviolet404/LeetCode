class Solution 
{
public:
    int xor_operation(int n, int start) 
    {
        int temp = start;
        for(int i = 1; i < n; ++i)
        {
            start ^= temp + 2;
            temp += 2;
        }
        return start;
    }
};