//#include <stdio.h>
//
//int main()
//{
//	long long Now_triangle[61] = { 0 }, Follow_triangle[61] = { 0 };
//	int N, K, i, j;
//	
//	scanf("%d %d", &N, &K);
//
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0) Now_triangle[j] = 1;
//			else if (j == i) Now_triangle[j] = 1;
//			else Now_triangle[j] = Follow_triangle[j] + Follow_triangle[j - 1];
//		}
//		for (j = 0; j <= i; j++) Follow_triangle[j] = Now_triangle[j];
//	}
//
//	printf("%lld\n", Now_triangle[K - 1]);
//}