int peak_index_in_mountain_array(int* arr, int arr_size) 
{
    int left = 0, right = arr_size - 1, mid = (left + right) / 2;
    while (left != right)
    {
        if(left + 1 == mid) 
        {
            if (right - 1 != mid) return arr[right - 1] > arr[mid] ? right - 1 : mid;
            return arr[left] > arr[mid] ? left : mid;
        }
        else if (arr[(right + mid) / 2] < arr[(left + mid) / 2]) 
        {
            right = (right + mid) / 2;
            mid = (left + right) / 2;
        }
        else
        {
            left = (left + mid) / 2;
            mid = (left + right) / 2;
        }
    }  
    return arr[left] > arr[right] ? left : right; 
}