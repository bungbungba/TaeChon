//#include <stdio.h>
//
////�迭 �����Լ�
////@parm �迭, �ε���
//void sort(unsigned long long arr[], int N);
//int swap(unsigned long long *x, unsigned long long *y);
//
//int main()
//{
//
//	// 3 ~ 20,000��, �Ʒ� �� ����
//	unsigned long long stick[20000] = { 0, };
//	int N, i, j, b;
//
//	scanf("%d", &N);
//	//�� ����
//	for (i = 0; i < N; i++) scanf("%llu", &stick[i]);
//
//	sort(stick, N);
//
//	for (i = 0; i < N - 2; i++)
//	{
//		//�ﰢ�� �˻�
//		b = 0;
//		for (j = i + 1; j < N - 1; j++)
//			if (stick[i] < stick[j] + stick[j + 1]) b = 1;
//
//		//�ﰢ���� ������ possible ��� �� ����
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
//				// swap�� �Ͼ���� ��
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
