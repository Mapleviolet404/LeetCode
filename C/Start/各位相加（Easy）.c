int add_digits(int num) 
{
    int ans = 0;
    for (;;)
    {
        ans += num % 10;
        num /= 10;
        if (num == 0 && ans > 9) num = ans, ans = 0;
        else if (num == 0 && ans < 10) return ans;
    }
}