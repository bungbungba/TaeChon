//#include <stdio.h>
//
//int main()
//{
//	int A, B, C, D;
//	int a, b, c, d, e, f, g;
//	for (A = 0; A <= 1; A++)
//	{
//		for (B = 0; B <= 1; B++)
//		{
//			for (C = 0; C <= 1; C++)
//			{
//				for (D = 0; D <= 1; D++)
//				{
//					a = !(B && !D);
//					b = !(B || C);
//					c = !(A && !D);
//					d = !(!C || c);
//					e = !(b && c);
//					f = !(d || !e);
//					g = !(a && f);
//					if (g == 1) printf("%d %d %d %d\n", A, B, C, D);
//				}
//			}
//		}
//	}
//
//	return 0;
//}