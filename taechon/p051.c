//#include <stdio.h>
//#include <stdlib.h>
//
//// ��ǥ�� ���� ���ϴ� �Լ�
////@parm : (x�Ǵ� y)��ǥ, (���� ���� ����)��ǥ
//int Diff(int a, int b)
//{
//	if (a > b) return a - b;
//	else return b - a;
//}
//
//// ��ǥ ����ü
//typedef struct
//{
//	int x, y;
//}POINT;
//
//int main()
//{
//	// ����, �ݺ��� ���� 2��
//	int n, i, j;
//	// �Ÿ�, �ִ밪, x ����, y ����
//	int distance = 0, max = 0, x, y;
//	POINT point[10000];
//
//	// ��� �������ΰ�
//	scanf("%d", &n);
//	// ���� �޴� �ݺ���
//	for (i = 0; i < n; i++) scanf("%d %d", &point[i].x, &point[i].y);
//
//	// ���� ã�� �ݺ���
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