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
//// 좌표 구조체
//typedef struct
//{
//	int x, y;
//}POINT;
//
//int main()
//{
//	// 갯수, 반복문 변수 2개
//	int n, i, j;
//	// 거리, 최대값, x 차이, y 차이
//	int distance = 0, max = 0, x, y;
//	POINT point[10000];
//
//	// 몇개를 받을것인가
//	scanf("%d", &n);
//	// 값을 받는 반복문
//	for (i = 0; i < n; i++) scanf("%d %d", &point[i].x, &point[i].y);
//
//	// 값을 찾는 반복문
//	for (i = 0; i < n; i++)
//	{
//		for (j = i + 1; j < n; j++)
//		{
//			x = Diff(point[i].x, point[j].x);
//			y = Diff(point[i].y, point[j].y);
//			distance = x + y;
//
//			if (distance > max) max = distance;
//		}
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}