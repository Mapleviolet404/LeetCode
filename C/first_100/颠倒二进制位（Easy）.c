////#include <stdio.h>
////#include <math.h>
////
//////题目中 0 <= n <= 2 ^ 31 - 2
////
////int reverse_bits(int n)
////{
////	int reversed_num = 0;
////	for (int i = 1; i < 31; i++)
////	{
////		int temp = 0;
////		temp = n / pow(2, i);
////		temp = temp % 2;
////		reversed_num += temp * pow(2, 31 - i);
////	}
////	return reversed_num;
////}
////
//////你过关
//
////更好的做法(位左右移运算符)
//#include <stdio.h>
//
//int reverse_bits(int n)
//{
//	int reversed_num = 0;
//	for (int i = 1; i < 31 && n > 0; i++)
//	{
//		n >>= 1;
//		reversed_num  |= (n & 1) << (31 - i);
//	}
//	return reversed_num;
//}
//
////你过关

//比上个还要更好的做法(分治)
int reverse_bits(int n)
{
	
}
