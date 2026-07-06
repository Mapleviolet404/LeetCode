////给你一个字符串 s，由若干单词组成，单词前后用一些空格字符隔开。返回字符串中 最后一个 单词的长度。
////
////单词 是指仅由字母组成、不包含任何空格字符的最大子字符串。
//
//#include <stdio.h>
//
//int get_length_of_str(char* str)
//{
//	int len = 0;
//	for (; str[len] != '\0'; len++);
//	return len;
//}
//
//int length_of_last_word(char* s)
//{
//	int ret = 0;
//	int len = get_length_of_str(s) - 1;
//	for (; len >= 0 && s[len] != ' '; len--)
//	{
//		ret++;
//	}
//	if (ret == 0)
//	{
//		while (s[len] == ' ')
//		{
//			len--;
//		}
//		for (; len >= 0 && s[len] != ' '; len--)
//		{
//			ret++;
//		}
//	}
//	return ret;
//}
//
////你过关
