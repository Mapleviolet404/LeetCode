int subtract_product_and_sum(int n) 
{
    int ans_mul = 1;
    int ans_plus = 0;
    for (; n;)
    {
        ans_mul *= n % 10;
        ans_plus += n % 10;
        n /= 10;
    }
    return ans_mul - ans_plus;
}