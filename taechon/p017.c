//#include <stdio.h>
//
//
////�� �ΰ� �ٲٴ� �Լ�
////@parm : �����ͷ� ���� �޾� ������ ���� �ٲ���
//void swap(int * x, int * y);
//
//int main()
//{
//	int N, num, First_min, Second_min, i;
//
//	scanf("%d", &N);
//
//	if (N == 2)
//	{
//		scanf("%d", &First_min);
//		scanf("%d", &Second_min);
//		if (First_min > Second_min) swap(&First_min, &Second_min);
//	}
//	else
//	{
//		for (i = 0; i < N; i++)
//		{
//			scanf("%d", &num);
//
//			//continue ������ �ؿ� if������ ���� ���Ե����� �ʱ� ������ ��������� ��
//			if (i == 0)
//			{
//				First_min = num;
//				continue;
//			}
//			else if (i == 1)
//			{
//				Second_min = num;
//				continue;
//			}
//
//			//������ �� ����
//			if (Second_min > num) Second_min = num;
//			
//			//������ �ƴ��� ���ؼ� ������ �� �۴ٰ� ��
//			if (First_min > Second_min) swap(&First_min, &Second_min);
//		}
//	}
//
//	printf("%d\n", Second_min);
//
//	return 0;
//}
//
//void swap(int * x, int * y)
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}