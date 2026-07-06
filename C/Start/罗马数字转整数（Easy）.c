//#include <stdio.h>
//#include <stdlib.h>
//
//int transfer_romanchar_to_numchar(char c)
//{
//
//	if (c == 'I')
//	{
//		return 1;
//	}
//	else if (c == 'V')
//	{
//		return 5;
//	}
//	else if (c == 'X')
//	{
//		return 10;
//	}
//	else if (c == 'L')
//	{
//		return 50;
//	}
//	else if (c == 'C')
//	{
//		return 100;
//	}
//	else if (c == 'D')
//	{
//		return 500;
//	}
//	else if (c == 'M')
//	{
//		return 1000;
//	}
//	else
//	{
//		printf("the input char is not a romannum\n");
//		return 0;
//	}
//}
//
//int roman_to_int(char* s) 
//{
//	//存放结果
//	int sum = 0;
//	//记录数组长度
//	int arr_size = 0;
//	for (int i = 0; i < 100; i++)
//	{
//		if (s[i] == '\0')
//		{
//			break;
//		}
//		arr_size++;
//	}
//	printf("%d\n", arr_size);
//	for (int i = 0; i < arr_size; i++)
//	{
//		if (s[i] == 'I')
//		{
//			if (s[i + 1] == 'V')
//			{
//				sum += 4;
//				i++;
//				continue;
//			}
//			else if (s[i + 1] == 'X')
//			{
//				sum += 9;
//				i++;
//				continue;
//			}
//		}
//		else if (s[i] == 'X')
//		{
//			if (s[i + 1] == 'L')
//			{
//				sum += 40;
//				i++;
//				continue;
//			}
//			else if (s[i + 1] == 'C')
//			{
//				sum += 90;
//				i++;
//				continue;
//			}
//		}
//		else if (s[i] == 'C')
//		{
//			if (s[i + 1] == 'D')
//			{
//				sum += 400;
//				i++;
//				continue;
//			}
//			if (s[i + 1] == 'M')
//			{
//				sum += 900;
//				i++;
//				continue;
//			}
//		}
//		sum += transfer_romanchar_to_numchar(s[i]);
//	}
//	return sum;
//}
//
//int main(int argc, char* argv[])
//{
//	char* romannums;
//	int romannums_size = 100;
//	romannums = (char*)calloc(romannums_size, sizeof(char));
//	if (romannums == NULL)
//	{
//		printf("memory alloc error!!!");
//		return 0;
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		romannums[i] = 'I';
//		romannums[i + 2] = 'V';
//	}
//	int test_int = 0;
//	test_int = roman_to_int(romannums);
//	printf("%d\n", test_int);
//	free(romannums);
//	romannums = NULL;
//	return 0;
//}
////你过关
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
////错误代码
////int calculate_romannums(char* romannums, int romannums_size)
////{
////	int sum = 0;			//记录结果
////	char c;					//存放单个罗马字符
////	for (int i = 0; i < romannums_size; i++)
////	{
////		int temp = 0;
////		c = romannums[i];
////		temp = transfer_romanchar_to_numchar(c);
////		sum += temp;
////	}
////}
////
////int roman_to_int(char* s) 
////{
////	int romannums_size = 0;
////	for (int i = 0; i < 100; i++)
////	{
////		if (s[i] == '\0')
////		{
////			break;
////		}
////		romannums_size++;
////	}
////	printf("%d", romannums_size);
////	int sum = 0;
////	sum = calculate_romannums(s, romannums_size);
////	return sum;
////}
