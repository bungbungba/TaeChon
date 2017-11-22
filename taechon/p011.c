//#include <stdio.h>
//
//int Triangle(int x, int y, int z); // 삼각형 찾는 함수.
//
//int main()
//{
//	int N, x, y, z, temp1, temp2, count = 0, arrx[4096] = { 0 }, arry[4096] = { 0 };
//	
//	scanf("%d", &N);
//
//	temp1 = N;
//	int i, j, check = 0, k = 0, b = 0;
//	for (i = 1; i < N / 2 + 1; i++)
//	{
//		x = i; temp1 -= i;
//		for (j = 1; j <= temp1 / 2 + 1; j++)
//		{
//			temp2 = temp1;
//			y = j; temp2 -= j;
//			b = 0;
//			if (x != y)
//			{
//				for (check = 0; check < k; check++) // 중복 체크
//				{
//					if (arrx[check] == x && arry[check] == y) 
//					{
//						b = 1;
//						break;
//					}
//				}
//			}
//			if (b) continue;
//			z = temp2;
//			if (Triangle(x, y, z))
//			{
//				if (!(x == y))
//				{
//					arrx[k] = y; // 중복되는 길이 제거
//					arry[k++] = x; // 중복되는 길이 제거
//				}
//				count++;
//			}
//		}
//		temp1 = N;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//
//int Triangle(int x, int y, int z)
//{
//	if (!(x == y && y == z) && y >= z) return 0; // 삼각형 성립 x
//	if (x > z) return 0; // 삼각형 성립 x
//
//	if (x == y && y == z) return 1; // 정삼각	
//	else if (x == z && x + z > y) return 1; //이등변
//	else if (x + y > z) return 1; // 삼각형
//	else return 0;
//}