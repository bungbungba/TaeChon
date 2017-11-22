//#include <stdio.h>
//
//int main()
//{
//	int arr[19][19], n, i, j, multi1 = 1, multi2 = 1;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < n; j++) scanf("%d", &arr[i][j]);
//
//	for (i = 0; i < n; i++)
//	{
//		multi1 *= arr[i][i];
//		multi2 *= arr[i][n - 1 - i];
//	}
//
//	printf("%d\n", multi1 - multi2);
//}