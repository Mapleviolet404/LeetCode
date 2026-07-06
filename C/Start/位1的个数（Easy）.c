////#include <stdio.h>
/////*
////给定一个正整数 n，编写一个函数，
////获取一个正整数的二进制形式并
////返回其二进制表达式中设置位的个数（也被称为汉明重量）
////*/
////
////
////int hamming_weight(int n)
////{
////	int set_num = 0;
////	for (; n;)
////	{
////		if (temp % 2 == 1) set_num++;
////		n >>= 1;
////	}
////	return set_num;
////}
////
//////你过关
////
////更好的做法
//#include <stdio.h>
//
//int hamming_weight(int n)
//{
//	int set_num = 0;
//	for (; n;)
//	{
//		n &= n - 1;
//		set_num++;
//	}
//	return set_num;
//}
//
////你过关
