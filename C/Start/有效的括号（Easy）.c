////给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s 
////判断字符串是否有效。
////
////有效字符串需满足：
////
////左括号必须用相同类型的右括号闭合。
////左括号必须以正确的顺序闭合。
////每个右括号都有一个对应的相同类型的左括号。
//
//#include <stdio.h>
//#include <string.h>
//
//typedef enum
//{
//	false,
//	true
//}bool;
//
//bool is_valid(char* s)
//{
//	int stack[5000];
//	int top = -1;
//	int len = strlen(s);
//	int i = 0;
//	while (i < len)
//	{
//		if (top > -1 && ((stack[top] == '(' && s[i] == ')') || (stack[top] == '[' && s[i] == ']') || (stack[top] == '{' && s[i] == '}')))
//		{
//			while (top > -1 && ((stack[top] == '(' && s[i] == ')') || (stack[top] == '[' && s[i] == ']') || (stack[top] == '{' && s[i] == '}')))
//			{
//				i++, top--;
//			}
//		}
//		else if (top < 4999 && i < len && (s[i] == '(' || s[i] == '[' || s[i] == '{'))
//		{
//			while (top < 4999 && i < len && (s[i] == '(' || s[i] == '[' || s[i] == '{'))
//			{
//				stack[++top] = s[i++];
//			}
//		}
//		else return false;
//	}
//	if (top == -1) return true;
//	else return false;
//}
//
////你过关（虽然写的一般，有更好的做法）
//
//更好的做法（hash）
