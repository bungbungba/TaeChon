//#include <stdio.h>
//
//int main()
//{
//	long long index[100000] = { 0 };
//	//N ������ X �� ��� S �� ����� ��� First ó����
//	long long N, X, S, First; 
//	int i;
//
//	scanf("%lld", &N);
//	
//	First = N;
//	while (1)
//	{
//		S = 0;
//		while (N > 0)
//		{
//			X = N % 10;
//			N /= 10;
//			S += X * X;
//		}
//		if (S == 1)
//		{
//			printf("HAPPY\n");
//			return 0;
//		}
//		else
//		{
//			for (i = 0; index[i] != 0; i++)
//			{
//				if (S == index[i])
//				{
//					printf("UNHAPPY\n");
//					return 0;
//				}
//			}
//		}
//		index[i] = S;
//		N = S;
//	}
//
//	return 0;
//}