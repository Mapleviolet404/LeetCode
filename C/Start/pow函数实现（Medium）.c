//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//double my_pow(double x, int n) 
//{
//	double temp = 1;
//	double temp_dynamic = x;
//	if (n == 0)
//	{
//		return 1.0f;
//	}
//	else if (n == 1)
//	{
//		return x;
//	}
//	else if (n > 0)
//	{
//		for (int i = 1; i < n;)
//		{
//			if (n % 2 == 1)
//			{
//				temp = temp * temp_dynamic;
//				n--;
//				continue;
//			}
//			x = x * x;
//			temp_dynamic = x;
//			n = n / 2;
//		}
//		return temp * x;
//	}
//	else if (n == INT_MIN)
//	{
//		n++;
//		n = -n;
//		temp = x;
//		for (int i = 1; i < n;)
//		{
//			if (n % 2 == 1)
//			{
//				temp = temp * temp_dynamic;
//				n--;
//				continue;
//			}
//			x = x * x;
//			temp_dynamic = x;
//			n = n / 2;
//		}
//		return 1 / (temp * x);
//	}
//	else if (n < 0)
//	{
//		n = -n;
//		for (int i = 1; i < n;)
//		{
//			if (n % 2 == 1)
//			{
//				temp = temp * temp_dynamic;
//				n--;
//				continue;
//			}
//			x = x * x;
//			temp_dynamic = x;
//			n = n / 2;
//		}
//		return 1 / (temp * x);
//	}
//	return 0.0f;
//}
//
//int main(int argc, char* argv[])
//{
//	double x = 0.9f;
//	int n = 50;
//	double y = my_pow(x, n);
//	printf("%f\n", y);
//	double z = pow(x, n);
//	printf("%f\n", z);
//}
////你过关
