//#include <stdio.h>
//
////배열 정렬함수
////@parm 배열, 인덱스
//void sort(unsigned long long arr[], int N);
//int swap(unsigned long long *x, unsigned long long *y);
//
//int main()
//{
//
//	// 3 ~ 20,000개, 아래 옆 높이
//	unsigned long long stick[20000] = { 0, };
//	int N, i, j, b;
//
//	scanf("%d", &N);
//	//값 대입
//	for (i = 0; i < N; i++) scanf("%llu", &stick[i]);
//
//	sort(stick, N);
//
//	for (i = 0; i < N - 2; i++)
//	{
//		//삼각형 검사
//		b = 0;
//		for (j = i + 1; j < N - 1; j++)
//			if (stick[i] < stick[j] + stick[j + 1]) b = 1;
//
//		//삼각형이 맞으면 possible 출력 후 종료
//		if (b)
//		{
//			printf("possible\n");
//			return 0;
//		}
//	}
//	printf("impossible\n");
//
//	return 0;
//}
//
//void sort(unsigned long long arr[], int N)
//{
//	int temp, i, j, b;
//
//	for (i = 0; i < N; i++)
//	{
//		b = 1;
//		for (j = 0; j < N - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				// swap이 일어났는지 봄
//				b = swap(&arr[j], &arr[j + 1]);
//			}
//		}
//		if (b) break;
//	}
//}
//
//int swap(unsigned long long * x, unsigned long long * y)
//{
//	unsigned long long temp = *x;
//	*x = *y;
//	*y = temp;
//	return 0;
//}
