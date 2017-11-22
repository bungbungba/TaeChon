//#include <stdio.h>
//
//int main()
//{
//	int x = 0, y = 0, a = 0, b = 0, i = 0, min = 0, bol = 0;
//
//	scanf("%d %d", &x, &y);
//
//	a = min = y;
//	b = x - y;
//
//	while (a < x)
//	{
//		if (a < b) min = a;
//		else min = b;
//		//공약수 a % k == 0 && b % k == 0 / k < a, b
//		bol = 0;
//		//최대공약수가 y인지 아닌지를 체크
//		for (i = y; i <= min; i++)
//		{
//			if (a % i == 0 && b % i == 0)
//			{
//				if (i == y)
//					bol = 1;
//				else bol = 0;
//			}
//		}
//		if (bol) printf("%d %d\n", a, b);
//
//		a += y;
//		b -= y;
//	}
//	if (!bol) printf("-1\n");
//
//	return 0;
//}