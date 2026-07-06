//////假设你正在爬楼梯。需要 n 阶你才能到达楼顶。
//////
//////每次你可以爬 1 或 2 个台阶。你有多少种不同的方法可以爬到楼顶呢？
////（动态规划DP）
////#include <stdio.h>
////
////int climb_stairs(int n)
////{
////	if (n < 3)
////	{
////		return n;
////	}
////	int* dp = (int*)calloc(n + 1, sizeof(int));
////	dp[0] = 0;
////	dp[1] = 1;
////	dp[2] = 2;
////	for (int i = 3; i < n + 1; i++)
////	{
////		dp[i] = dp[i - 1] + dp[i - 2];
////	}
////	return dp[n];
////}
////
//////你过关
////
////更好的做法
//
//#include <stdio.h>
//
//int climb_stairs(int n)
//{
//	if (n < 3)
//	{
//		return n;
//	}
//	int prev_1 = 1, prev_2 = 2, cur = 0;
//	for (int i = 3; i < n + 1; i++)
//	{
//		cur = prev_1 + prev_2;
//		prev_1 = prev_2;
//		prev_2 = cur;
//	}
//	return cur;
//}
//
////你过关