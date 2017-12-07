//#include <stdio.h>
//#include <stdlib.h>
//
//// 좌표값 차이 구하는 함수
////@parm : (x또는 y)좌표, (앞의 값과 맞춘)좌표
//int Diff(int a, int b)
//{
//	if (a > b) return a - b;
//	else return b - a;
//}
//
//
//int main()
//{
//	// 갯수, 반복문 변수 2개
//	int n, i, j;
//	// 거리, 최대값, x 값, y값
//	int distance = 0, max = 0, x[100000], y[100000];
//
//	// 몇개를 받을것인가
//	scanf("%d", &n);
//	// 값을 받는 반복문
//	for (i = 0; i < n; i++) scanf("%d %d", &x[i], &y[i]);
//
//	// 값을 찾는 반복문
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			distance = Diff(x[i], x[j]) + Diff(y[i], y[j]);
//
//			if (distance > max) max = distance;
//		}
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}