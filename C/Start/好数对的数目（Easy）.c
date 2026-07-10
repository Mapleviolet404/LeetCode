int num_identical_pairs(int* nums, int nums_size) 
{
    int ans = 0;
    for (int i = 0; i < nums_size; ++i)
    {
        for(int j = i + 1; j < nums_size; ++j)
        {
            if(nums[i] == nums[j]) ans++;
        }
    }
    return ans;
}