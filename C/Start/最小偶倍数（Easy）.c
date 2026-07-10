int smallest_even_multiple(int n) 
{
    if ((n & 1) == 0) return n;
    else return 2 * n;
}