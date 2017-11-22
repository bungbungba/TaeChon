//#include <stdio.h>
//
//int main()
//{
//	double R, A, W, H, result;
//
//	scanf("%lf %lf %lf %lf", &R, &A, &W, &H);
//	
//	//남녀 판별
//	if (R == 0) R = 0.73;
//	else R = 0.6;
//	
//	//BAC 음수 판별
//	if((result = ((A * 5.14) / (R * W)) - (0.015 * H)) < 0) result = 0;
//
//	printf("%.5lf\n", result);
//	return 0;
//}