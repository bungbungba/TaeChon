//#include <stdio.h>
//
//int main()
//{
//	// �ڸ� ��ġ ���� �迭
//	int cut_h[256] = { 0 }, cut_w[256] = { 0 };
//	
//	//�ݺ��� ���� ;  m * n ; ����, ����, Ŀ�� Ƚ�� ���� = a, b, c
//	int i, j, m, n, a, b, c;
//
//	//����, �ʺ�, 
//	int hight = 0, width = 0, max_h = 0, max_w = 0, data = 0;
//
//	//�� �޴� ����
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