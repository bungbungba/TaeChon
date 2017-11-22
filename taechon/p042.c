//#include <stdio.h>
//#include <stdlib.h>
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
//	scanf("%d %d", &n, &m); // 값 받기
//
//	for (i = 0; i < n; i++)
//		for (j = 0; j < m; j++) scanf("%d", &arr[i][j]); // 값 받기
//
//	for (i = 0; i < n; i++) // 날짜
//	{
//		sum1 = 0;
//		sum2 = 0;
//
//		for (j = 0; j < m; j++) // 갯수
//		{
//			sum1 += arr[i][j]; // 가장 많이 생산한 물건번호의 생산량
//			sum2 += arr[j][i]; // 가장 많이 생산한 날의 생산량
//		}
//		if (thing.cnt <= sum1) // 갯수 비교
//		{
//			thing.cnt = sum1;
//			thing.day = i + 1;
//		}
//		if (day.cnt <= sum2)
//		{
//			day.cnt = sum2;
//			day.day = i + 1;
//		}
//	}
//	printf("%d %d\n", thing.day, thing.cnt);
//	printf("%d %d\n", day.day, day.cnt);
//
//	return 0;
//}