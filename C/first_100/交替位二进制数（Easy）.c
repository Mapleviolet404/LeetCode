//////////题目要求中1 <= n <= 231 - 1
//
////#include <stdio.h>
////
////typedef enum bool
////{
////	false,
////	true
////}bool;
////
////bool has_alternating_bits(int n)
////{
////	char temp_1 = 0;
////	int temp_n = n;
////	char temp_2 = 0;
////	while (n)
////	{
////		n >>= 1;
////		temp_1++;
////	}
////	n = temp_n;
////	if (n % 2 == 1)
////	{
////		while (n % 4 == 1)
////		{
////			n >>= 2;
////			temp_2++;
////		}
////	}
////	else
////	{
////		while (n % 4 == 2)
////		{
////			n >>= 2;
////			temp_2++;
////		}
////	}
////	n = temp_n;
////	if (temp_2 == (temp_1 + 1) / 2)
////	{
////		return true;
////	}
////	else
////	{
////		return false;
////	}
////}
////
//////你过关
////
////更优雅的做法(内存其实用的更多一点点)
//typedef enum bool
//{
//	false,
//	true
//}bool;
//
//bool has_alternating_bits(int n)
//{
//	unsigned int temp = n ^ (n >> 1);
//	return (temp & (temp + 1)) == 0;
//}
// 
////你过关