//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	int i, j = 0, N, *arr, count = 0;; // �����Ҵ� �迭,  �迭 �ε����� ����� ���� ����
//	scanf("%d", &N);
//	arr = (int*)calloc(N, sizeof(int));
//	for (i = 2; i <= N; i++)
//		arr[i] = i;
//
//	for (i = 2; i <= N; i++)
//	{
//		if (arr[i] == 0) continue; // �����佺�ڷ��� ü�� ����� Ȯ�εǸ� ����
//		for (j = i + i; j <= N; j += i) //  ��� �Ÿ���
//			arr[j] = 0;
//	}
//
//	for (i = 2; i <= N; i++)
//		if (arr[i] != 0)count++;
//
//
//	printf("%d\n", count);
//}
//// ������� : http://marobiana.tistory.com/91