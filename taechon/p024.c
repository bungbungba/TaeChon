//#include <stdio.h>
//#include <stdio.h>
//
//void sort(int arr[], int n);
//int swap(int *x, int *y);
//
//int main()
//{
//	int card[10000], n, i;
//	long long big = 0;
//
//
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++) scanf("%d", &card[i]);
//	
//	sort(card, n);
//
//
//	//�ּ� �ΰ�	
//	big = card[0] * card[1]; // ��� 2
//	
//	if(big < (card[0] * card[1] * card[2])) big = card[0] * card[1] * card[2]; // ��� 3 or ��� 2 ���� 1
//	
//	if(big < (card[n - 1] * card[n - 2])) big = card[n - 1] * card[n - 2]; // ���� 2 
//	
//	if(big < (card[0] * card[n - 1] * card[n - 2])) big = card[0] * card[n - 1] * card[n - 2]; // ���� 2 ��� 1
//
//	printf("%lld\n", big);
//
//	return 0;
//}
//
//void sort(int arr[], int n)
//{
//	int temp, i, j, b;
//
//	for (i = 1; i < n; i++)
//	{
//		b = 1;
//		for (j = 0; j < n - i; j++)
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
//int swap(int * x, int * y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//	return 0;
//}
