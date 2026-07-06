//////给你一个整数数组 cost ，其中 cost[i] 是从楼梯第 i 个台阶向上爬需要支付的费用。一旦你支付此费用，即可选择向上爬一个或者两个台阶。
//////
//////你可以选择从下标为 0 或下标为 1 的台阶开始爬楼梯。
//////
//////请你计算并返回达到楼梯顶部的最低花费。
////
////#include <stdio.h>
////
////int min_cost_climbing_stairs(int* cost, int cost_size)
////{
////	int* dp_cost = (int*)calloc(cost_size + 1, sizeof(int));
////	dp_cost[0] = 0;
////	dp_cost[1] = 0;
////	for (int i = 2; i < cost_size + 1; i++)
////	{
////		dp_cost[i] = (dp_cost[i - 2] + cost[i - 2] < dp_cost[i - 1] + cost[i - 1]) ? dp_cost[i - 2] + cost[i - 2] : dp_cost[i - 1] + cost[i - 1];
////	}
////	int min_cost = dp_cost[cost_size];
////	free(dp_cost);
////	return min_cost;
////}
////
//////你过关
//
////更好的做法
//int min_cost_climbing_airs(int* cost, int cost_size)
//{
//	int prev_cost_1 = 0, prev_cost_2 = 0, curr_cost = 0;
//	for (int i = 2; i < cost_size + 1; i++)
//	{
//		curr_cost = (prev_cost_1 + cost[i - 2] < prev_cost_2 + cost[i - 1]) ? prev_cost_1 + cost[i - 2] : prev_cost_2 + cost[i - 1];
//		prev_cost_1 = prev_cost_2;
//		prev_cost_2 = curr_cost;
//	}
//	return curr_cost;
//}
//
////你过关
