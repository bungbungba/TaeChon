//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i, j = 0, N, *arr, count = 0;; // 동적할당 배열,  배열 인덱스는 상수가 들어가기 때문
//	scanf("%d", &N);
//	arr = (int*)calloc(N, sizeof(int));
//	for (i = 2; i <= N; i++)
//		arr[i] = i;
//
//	for (i = 2; i <= N; i++)
//	{
//		if (arr[i] == 0) continue; // 에라토스텔레스 체로 배수가 확인되면 없앰
//		for (j = i + i; j <= N; j += i) //  배수 거르기
//			arr[j] = 0;
//	}
//
//	for (i = 2; i <= N; i++)
//		if (arr[i] != 0)count++;
//
//
//	printf("%d\n", count);
//}
//// 도움받음 : http://marobiana.tistory.com/91