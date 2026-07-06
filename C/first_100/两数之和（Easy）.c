///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//#include <stdio.h>
//#include <stdlib.h>
//
//int* two_sum(int* nums, int nums_size, int target, int* return_size) 
//{
//	static int* return_temp = NULL;
//	if (return_temp == NULL)
//	{
//		return_temp = (int*)malloc(2 * sizeof(int));
//	}
//	if (return_temp == NULL)
//	{
//		printf("return_temp == NULL");
//	}
//	else
//	{
//		for (int i = 0; i < 2; i++)
//		{
//			return_temp[i] = -1;
//		}
//		for (int i = 0; i < nums_size; i++)
//		{
//			for (int j = 0; j < nums_size; j++)
//			{
//				if ((target == nums[i] + nums[j]) && i != j)
//				{	
//					return_temp[0] = nums[i];
//					return_temp[1] = nums[j];
//					*return_size = 2;
//					printf("the result is : [%d, %d]\n", i, j);
//					return return_temp;
//				}
//			}
//		}
//	}
//	printf("result not found");
//	*return_size = 0;
//	return return_temp;
//}
//
//int main(int argc, char* argv[])
//{
//	int nums_size = 8;
//	int* nums;
//	nums = (int*)malloc(nums_size * sizeof(int));
//	if (nums != NULL)
//	{
//		for (int i = 0; i < nums_size; i++)
//		{
//			nums[i] = i+1;
//		}
//	}
//	
//	int return_size = -1;
//	two_sum(nums, nums_size, 8, &return_size);
//	free(nums);
//	return 0;
//}
////你过关