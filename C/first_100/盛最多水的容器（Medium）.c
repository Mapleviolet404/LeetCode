//////给定一个长度为 n 的整数数组 height 。有 n 条垂线
////// 第 i 条线的两个端点是(i, 0) 和(i, height[i]) 。
//////
//////找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
//////
//////返回容器可以储存的最大水量。
//////
//////说明：你不能倾斜容器。
////
////#include <stdio.h>
////
////int min_height(int a, int b)
////{
////	return a < b ? a : b;
////}
////
////int greater_val(int a, int b)
////{
////	return a > b ? a : b;
////}
////
////int max_area(int* height, int height_size)
////{
////	int left = 0;	
////	int right = height_size - 1;
////	int ret = 0;
////	while (left < right)
////	{
////		int temp = min_height(height[left], height[right]) * (right - left);
////		ret = greater_val(temp, ret);
////		if (height[left] > height[right])
////		{
////			right--;
////		}
////		else
////		{
////			left++;
////		}
////	}
////	return ret;
////}
////
//////你过关（但是这个是抄答案的）
////
////更差的做法
//#include <stdio.h>
//
//int min_height(int a, int b)
//{
//	return a < b ? a : b;
//}
//
//int greater_val(int a, int b)
//{
//	return a > b ? a : b;
//}
//
//int max_area(int* height, int height_size)
//{
//	int ret = 0;
//	for (int i = 0; i < height_size; i++)
//	{
//		for (int j = i; j < height_size; j++)
//		{
//			int area = min_height(height[i], height[j]) * (j - i);
//			ret = greater_val(ret, area);
//		}
//	}
//	return ret;
//}
////
////你过关（但是超出时间限制）