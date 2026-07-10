int* shuffle(int* nums, int nums_size, int n, int* return_size) 
{
    int *ans = (int*)malloc(nums_size * sizeof(int));
    for (int i = 0; i < n; ++i)
    {
        ans[i * 2] = nums[i];
        ans[i * 2 + 1] = nums[i + n];
    }
    *return_size = n * 2;
    return ans;
}