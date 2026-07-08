//int search_insert(int* nums, int numsSize, int target)
//{
//	if (nums[numsSize - 1] < target) return numsSize;
//  if (nums[0] >= target) return 0;
//	int mid = (numsSize - 1) / 2;
//	int left = 0;
//	int right = numsSize - 1;
//	for (;;)
//	{
//		if (left == mid)
//		{
//			return mid + 1;
//		}
//		else if (nums[mid] == target)
//		{
//			return mid;
//		}
//		else if (nums[mid] > target)
//		{
//			right = mid;
//			mid = (right + left) / 2;
//		}
//		else if (nums[mid] < target)
//		{
//			left = mid;
//			mid = (right + left) / 2;
//		}
//	}
//}
//
////你过关
