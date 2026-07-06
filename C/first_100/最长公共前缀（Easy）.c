////编写一个函数来查找字符串数组中的最长公共前缀。
////
////如果不存在公共前缀，返回空字符串" "
//
//#include <stdio.h>
//
//char* longest_common_prefix(char** strs, int strs_size)
//{
//	int i = 0;
//	for (;strs[0][i]; i++)
//	{
//		char c = strs[0][i];
//		for (int j = 1; j < strs_size; j++)
//		{
//			if (strs[j][i] != c) goto result;
//		}
//	}
//result:
//	if (i > 0)
//	{
//		char* prefix = (char*)calloc(i + 1, sizeof(char));
//		memcpy(prefix, strs[0], i);
//		return prefix;
//	}
//	else
//	{
//		return "";
//	}
//}
//
////你过关（但是AI助攻）