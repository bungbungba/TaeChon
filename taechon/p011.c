//#include <stdio.h>
//
//int Triangle(int x, int y, int z); // �ﰢ�� ã�� �Լ�.
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
//				for (check = 0; check < k; check++) // �ߺ� üũ
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
//					arrx[k] = y; // �ߺ��Ǵ� ���� ����
//					arry[k++] = x; // �ߺ��Ǵ� ���� ����
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
//	if (!(x == y && y == z) && y >= z) return 0; // �ﰢ�� ���� x
//	if (x > z) return 0; // �ﰢ�� ���� x
//
//	if (x == y && y == z) return 1; // ���ﰢ	
//	else if (x == z && x + z > y) return 1; //�̵
//	else if (x + y > z) return 1; // �ﰢ��
//	else return 0;
//}