//#include <stdio.h>
//
//typedef struct triangle
//{
//	int	Short, MID, Long;
//}TRIANGLE;
//
//int main()
//{
//	int N, temp1, temp2, count = 0;
//	TRIANGLE triangle;
//
//	scanf("%d", &N);
//
//	int i, j;
//
//
//	for (i = 1; i <= N / 3; i++) // �غ����� ũ�� �ȵǴϱ� 1/3����
//	{
//		// temp1, 2 = �Է¹��� ��(N)�� ����Ͽ� ��� �����Ͽ��ٰ� �־��ִ� ����
//		temp1 = N;
//		triangle.Short = i; temp1 -= i;
//
//		for (j = 1 ; j <= N / 2; j++)
//		{
//			temp2 = temp1;
//			triangle.MID = j; temp2 -= j;
//			triangle.Long = temp2;
//
//			if (triangle.Short + triangle.MID > triangle.Long) // �ﰢ�� ����
//			{
//
//			//	printf("%d %d %d\n", triangle.Short, triangle.MID, triangle.Long) ����� �´��� üũ
//				if (triangle.Short <= triangle.MID && triangle.Long >= triangle.MID)
//				//	printf("%d %d %d\n", triangle.Short, triangle.MID, triangle.Long) ����� �´��� üũ
//					count++;
//			}
//
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
