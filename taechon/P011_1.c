//#include <stdio.h>
//
//typedef struct triangle
//{
//	int	high, side, base;
//	struct triangle * next;
//}TRIANGLE;
//
//int main()
//{
//	int N, temp1, temp2, count = 0;
//	TRIANGLE triangle, *head, *tail, *temp;
//
//	scanf("%d", &N);
//
//	int i, j, b = 0;
//	
//	head = (TRIANGLE*)malloc(sizeof(TRIANGLE));
//	tail = head;
//	tail->next = NULL;
//	
//
//	for (i = 1; i <= N / 3; i++) // �غ����� ũ�� �ȵǴϱ� 1/3����
//	{
//		temp1 = N;
//		triangle.high = i; temp1 -= i;
//
//		for (j = N / temp1; j <= temp1 / 2; j++) 
//		{
//			temp2 = temp1;
//			triangle.side = j; temp2 -= j;
//			triangle.base = temp2;
//
//			if (triangle.high + triangle.side > triangle.base) // �ﰢ�� ����
//			{		
//				temp = head;
//				while (temp != tail)
//				{
//					if (temp->high == triangle.side && temp->side == triangle.high)
//					{
//						head = head->next;
//						b = 1;
//					}	
//					temp = temp->next;
//				}
//				if (b)
//				{
//					b = 0;
//					continue;
//				}
//				tail->high = triangle.high;
//				tail->side = triangle.side;
//
//				//printf("%d %d %d\n", triangle.high, triangle.side, triangle.base); //��� Ȯ���Ϸ��� �׷���
//				count++;
//
//				tail->next = (TRIANGLE*)malloc(sizeof(TRIANGLE));
//				tail = tail->next;
//			}
//			
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
