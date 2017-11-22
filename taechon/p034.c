//#include <stdio.h>
//
//int main()
//{
//	char Array[1003][1003];
//	int n, m, sum, Max = 0, i, j, i_, j_, count;
//
//	scanf("%d %d ", &n, &m);
//
//	for (i = 0; i < m; i++)6
//	{
//		gets(Array[i]);
//	}
//	
//	for (i = 0; i < m - 2; i++)
//	{
//		for (j = 0; j < n - 2; j++)
//		{	
//			sum = 0;
//			count = 1;
//			for (i_ = i; i_ < i + 3; i_++)
//			{
//				for (j_ = j; j_ < j + 3; j_++)
//				{
//					if (count != 5)
//						sum += Array[i_][j_] - '0';
//					count++;
//				}
//			}
//			if (sum > Max) Max = sum;
//		}
//	}
//	printf("%d\n", Max);
//
//	return 0;
//}