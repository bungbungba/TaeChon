//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(void * a, void * b)
//{
//	if (*(long long int*)a < *(long long int*)b)
//		return 1;
//	else if (*(long long int*)a > *(long long int*)b)
//		return -1;
//	else
//		return 0;
//}
//long long int arr[20000];
//
//int main()
//{
//	int n, i, j, k, b = 0, correct = 0;
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%lld", &arr[i]);
//	}
//
//	qsort(arr, n, sizeof(long long int), compare);
//
//	for (i = 0; i <= n - 2; i++)
//	{
//		for (j = i + 1; j < n - 1; j++)
//		{
//			if (arr[i] < arr[j] + arr[j + 1])
//			{
//				printf("%lld", arr[i] + arr[j] + arr[j + 1]);
//				return 0;
//			}
//		}
//	}
//	if (correct == 0)
//		printf("NONE");
//
//	return 0;
//}