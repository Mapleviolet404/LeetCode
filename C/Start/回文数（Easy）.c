//#include <stdio.h>
//#include <string.h>
//
//#define MAX 15
//
//typedef enum bool
//{
//	false,
//	true
//}bool;
//
//void char_swap(char* x, char* y)
//{
//	char temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//bool is_palindrome(int x) 
//{
//	//数组准备
//	char palindrome[MAX];
//	snprintf(palindrome, sizeof(palindrome), "%d", x);
//	int rear = 0;
//	int front = 0;
//	char temp[MAX];
//	strcpy_s(temp, MAX, palindrome);
//	//查找元素数量
//	for (int i = 0; i < MAX; i++)
//	{
//		if (palindrome[i] == '\0')
//		{
//			break;
//		}
//		rear++;
//	}
//	int index = rear;
//	rear--;
//	for (int i = 0; i < index / 2; i++)
//	{
//		char_swap(&temp[front++], &temp[rear--]);
//	}
//	if (index == 1)
//	{
//		return true;
//	}
//	int is_same = strcmp(temp, palindrome);
//	if (is_same == 0)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main(int argc, char* argv[])
//{
//	bool result_palindrome = false;
//	int x = 101;
//	int y = 10;
//	int z = -101;
//	result_palindrome = is_palindrome(x);
//	printf("%d\n", result_palindrome);
//	result_palindrome = is_palindrome(y);
//	printf("%d\n", result_palindrome);
//	result_palindrome = is_palindrome(z);
//	printf("%d\n", result_palindrome);
//	return 0;
//}
////你过关
