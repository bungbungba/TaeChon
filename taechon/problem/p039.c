//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int **arr1, **arr2, **arr3;
//	int n, m, i, j;
//	scanf("%d %d", &n, &m);
//
//	arr1 = (int **)calloc(n, sizeof(int*));
//	arr1[0] = (int *)calloc(n * m, sizeof(int));
//	for (i = 1; i < n; i++) arr1[i] = arr1[i - 1] + m;
//
//	arr2 = (int **)calloc(n, sizeof(int*));
//	arr2[0] = (int *)calloc(n * m, sizeof(int));
//	for (i = 1; i < n; i++) arr2[i] = arr1[i - 1] + m;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr1[i][j] + arr2[j][i]);
//		}
//		printf("\n");
//	}
//
//	free(arr1[0]);
//	free(arr1);
//	free(arr2[0]);
//	free(arr2);
//
//	return 0;
//}