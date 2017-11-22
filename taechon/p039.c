//#include <stdio.h>
//#include <stdlib.h>
//
//int arr1[1000][1000], arr2[1000][1000], arr3[1000][1000];
//
//int main()
//{
//	//int **arr1, **arr2;
//	int n, m, p, i, j, k;
//	scanf("%d %d %d", &n, &m, &p);
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			arr3[i][j] = 0;
//			for (k = 0; k < m; k++)
//				arr3[i][j] += arr1[i][k] * arr2[k][j];
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < p; j++)
//		{
//			printf("%d ", arr3[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}