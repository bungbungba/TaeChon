//#include <stdio.h>
//#include <stdlib.h>
//
//int compare(const void * a, const void * b)
//{
//	return *(int *)a - *(int *)b;
//}
//int absolute_number(int x, int y);
//
//int main()
//{
//	int n, m, c1, c2, i, j,*p, *q, min, length, closet_pair, absX, absY, count = 0;
//
//	scanf("%d %d", &n, &m);
//	scanf("%d %d", &c1, &c2);
//
//	p = (int*)calloc(n, sizeof(int));
//	q = (int*)calloc(m, sizeof(int));
//
//	for (i = 0; i < n; i++) scanf("%d", &p[i]);
//	for (i = 0; i < m; i++) scanf("%d", &q[i]);
//
//	qsort(p, n, sizeof(int), compare);
//	qsort(q, m, sizeof(int), compare);
//
//	//y축 절대값
//	absY = absolute_number(c1, c2);
//
//	//X축 절대값 초기값 입력
//	absX = absolute_number(p[0], q[0]);
//
//	closet_pair = length = absX + absY;
//
//	//최근접쌍 구하기
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			//X축 절대값
//			absX = absolute_number(p[i], q[j]);
//
//			//점 사이 거리가 짧으면 실행
//			if (length > absX + absY) length = absX + absY;
//		}
//	}
//	closet_pair = length;
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			//X축 절대값
//			absX = absolute_number(p[i], q[j]);
//			length = absX + absY;
//
//			//최근접쌍과 길이가 같으면 +1
//			if (closet_pair == length) count++;
//		}
//	}
//
//	printf("%d %d\n", closet_pair, count);
//
//	return 0;
//}
//
//int absolute_number(int x, int y)
//{
//	int num = x - y;
//
//	if (num < 0) num *= -1;
//
//	return num;
//}
//
