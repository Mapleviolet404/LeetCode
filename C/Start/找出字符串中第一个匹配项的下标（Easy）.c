//////给你两个字符串haystack和needle
//////请你在haystack字符串中找出needle字符串的第一个匹配项的下标（下标从 0 开始）
//////如果needle不是haystack的一部分,则返回- 1
////
////#include <stdio.h>
////
////int str_str(char* haystack, char* needle)
////{
////	//needle_length
////	int len_nee = 0;
////	int len_hay = 0;
////	for (; needle[len_nee] != '\0'; len_nee++);
////	for (; haystack[len_hay] != '\0'; len_hay++);
////	if (len_nee > len_hay) return -1;
////	int ret_pos = 0;
////	for (;haystack[ret_pos] != '\0';ret_pos++)
////	{
////		if (haystack[ret_pos] == needle[0])
////		{
////			int temp = 0;
////			while (haystack[ret_pos] == needle[temp] && ret_pos < len_hay)
////			{
////				temp++;
////				ret_pos++;
////				if (temp == len_nee)
////				{
////					return ret_pos - temp;
////				}
////			}
////			ret_pos -= temp;
////		}
////	}
////	return -1;
////}
////
//////你过关
////
////更好的做法（KMP算法）
//
//#include <stdio.h>
//#include <string.h>
//
//int str_str(char* haystack, char* needle)
//{
//    int len_h = strlen(haystack), len_n = strlen(needle);
//    if (len_n == 0)
//    {
//        return 0;
//    }
//    int* pi = (int*)calloc(len_n, sizeof(int));
//    pi[0] = 0;
//    for (int i = 1, j = 0; i < len_n; i++)
//    {
//        while (j > 0 && needle[i] != needle[j]) 
//        {
//            j = pi[j - 1];
//        }
//        if (needle[i] == needle[j]) 
//        {
//            j++;
//        }
//        pi[i] = j;
//    }
//    for (int i = 0, j = 0; i < len_h; i++)
//    {
//        while (j > 0 && haystack[i] != needle[j]) 
//        {
//            j = pi[j - 1];
//        }
//        if (haystack[i] == needle[j]) 
//        {
//            j++;
//        }
//        if (j == len_n)
//        {
//            free(pi);
//            return i - len_n + 1;
//        }
//    }
//    free(pi);
//    return -1;
//}
//
////你过关（虽然不是自己想的）
//



//////////////原始KMP
////////////void buildNext(char* pattern, int* next)
////////////{
////////////    int m = strlen(pattern);
////////////    next[0] = -1; // 哨兵，表示没有相同前后缀
////////////    int i = 0;    // 当前匹配的位置
////////////    int j = -1;   // 当前最长前缀的末尾位置
////////////    while (i < m - 1)
////////////    {
////////////        // j == -1 表示从头开始，或者 pattern[i] == pattern[j] 表示匹配成功
////////////        if (j == -1 || pattern[i] == pattern[j])
////////////        {
////////////            i++;
////////////            j++;
////////////            next[i] = j; // 记录当前位置的最长前缀长度
////////////        }
////////////        else
////////////        {
////////////            // 失配，j 回退到 next[j]
////////////            // 这就是动态规划的体现：利用子问题的解来更新当前状态
////////////            j = next[j];
////////////        }
////////////    }
////////////}

