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
//
//int main()
//{
//	// ����, �ݺ��� ���� 2��
//	int n, i, j;
//	// �Ÿ�, �ִ밪, x ��, y��
//	int distance = 0, max = 0, x[100000], y[100000];
//
//	// ��� �������ΰ�
//	scanf("%d", &n);
//	// ���� �޴� �ݺ���
//	for (i = 0; i < n; i++) scanf("%d %d", &x[i], &y[i]);
//
//	// ���� ã�� �ݺ���
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