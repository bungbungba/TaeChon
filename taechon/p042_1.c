//#include <stdio.h>
//#include <stdlib.h>
//
//int arr[1000][1000];
//int arr2[1000] = { 0, };
//int main()
//{
//	int a, b, c, i, j, d, e, f, sum = 0, sum1 = 0, sum2 = 0;
//
//	scanf("%d %d", &a, &b);
//	for (i = 0; i<a; i++)
//	{
//		sum = 0;
//		for (j = 0; j<b; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			sum += arr[i][j];
//			arr2[j] += arr[i][j];
//		}
//		if (sum >= sum1)
//		{
//			sum1 = sum;
//			c = i;
//		}
//	}
//	for (i = 0; i<b; i++)
//	{
//		if (arr2[i] >= sum2)
//		{
//			sum2 = arr2[i];
//			e = i;
//		}
//	}
//	printf("%d %d", c + 1, sum1);
//	printf("\n%d %d", e + 1, sum2);
//	return 0;
//}
