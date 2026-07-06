////给你两个二进制字符串 a 和 b ，
////以二进制字符串的形式返回它们的和。
//
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//int get_ans_len(int a, int b)
//{
//	return a >= b ? a + 1 : b + 1;
//}
//
//void reserve(char* str)
//{
//	int len = strlen(str);
//	for (int i = 0; i < len / 2; i++)
//	{
//		char a = str[len - i - 1];
//		str[len - i - 1] = str[i], str[i] = a; 
//	}
//}
//
//char* add_binary(char* a, char* b)
//{
//	reserve(a);
//	reserve(b);
//	int len_a = strlen(a);
//	int len_b = strlen(b);
//	int len_ans = get_ans_len(len_a, len_b), curr = 0;
//	char* ans = (char*)calloc(len_ans + 1, sizeof(char));
//	int index = 0;
//	for (int i = 0; i < len_ans - 1; ++i)
//	{
//		index += i < len_a ? (a[i] == '1') : 0;
//		index += i < len_b ? (b[i] == '1') : 0;
//		ans[curr++] = index % 2 + '0';
//		index /= 2;
//	}
//
//	if (index) ans[curr++] = '1';
//	reserve(ans);
//	return ans;
//}
//
//你过关
