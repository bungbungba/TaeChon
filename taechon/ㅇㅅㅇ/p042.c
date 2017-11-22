//#include <stdio.h>
//
//typedef struct
//{
//	int cnt, day;
//}STR;
//
//int arr[1001][1001];
//
//int main()
//{
//	int n, m, i, j, sum1, sum2;
//	STR day = { 0, 0 }, thing = { 0, 0 };
//
//	scanf("%d %d", &n, &m);
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++) scanf("%d", &arr[i][j]);
//
//	for (i = 0; i < n; i++)
//	{
//		sum1 = 0;
//		sum2 = 0;
//
//		for (j = 0; j < m; j++)
//		{
//			sum1 += arr[i][j];
//			sum2 += arr[j][i];
//		}
//		if (thing.cnt < sum1)
//		{
//			thing.cnt = sum1;
//			thing.day = i + 1;
//		}
//		if (day.cnt < sum2)
//		{
//			day.cnt = sum2;
//			day.day = i + 1;
//		}
//	}
//	printf("%d %d\n", thing.day, thing.cnt);
//	printf("%d %d\n", day.day, day.cnt);
//}