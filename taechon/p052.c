//#include <stdio.h>
//
//int main()
//{
//	// 자른 위치 저장 배열
//	int cut_h[256] = { 0 }, cut_w[256] = { 0 };
//	
//	//반복문 변수 ;  m * n ; 가로, 세로, 커팅 횟수 변수 = a, b, c
//	int i, j, m, n, a, b, c;
//
//	//높이, 너비, 
//	int hight = 0, width = 0, max_h = 0, max_w = 0, data = 0;
//
//	//값 받는 변수
//	scanf("%d %d", &m, &n);
//	scanf("%d", &c);
//	
//	for (i = 0; i < c; i++)
//	{
//		scanf("%d %d", &a, &b);
//		if (a == 1) cut_w[b] = 1;
//		else if (a == 0) cut_h[b] = 1;
//	}
//
//	cut_w[m] = 1;
//	cut_h[n] = 1;
//
//	for (i = 1; i <= m; i++)
//	{
//		if (cut_w[i] == 1)
//		{
//			width = i - data;
//
//			if (max_w < width) max_w = width;
//
//			data = i;
//		}
//	}
//
//	data = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (cut_h[i] == 1)
//		{
//			hight = i - data;
//
//			if (max_h < hight) max_h = hight;
//
//			data = i;
//		}
//	}
//
//	printf("%d\n", max_h * max_w);
//
//
//	
//}