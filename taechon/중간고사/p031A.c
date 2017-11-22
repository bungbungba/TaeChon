//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//typedef struct
//{
//	double a, b;
//}Complex;
//
//
//int main(int argc, char *argv[]) {
//	
//	Complex A, B, C, B_div_C, result;
//	
//	scanf("%lf %lf %lf %lf %lf %lf", &A.a, &A.b, &B.a, &B.b, &C.a, &C.b);
//	
//	B_div_C.a = (((B.a * C.a) + (B.b * C.b)) / ((C.a*C.a) + (C.b * C.b)));
//	B_div_C.b = (((B.b * C.a) - (B.a * C.b)) / ((C.a*C.a) + (C.b * C.b)));
//	
//	result.a = (A.a + B_div_C.a);
//	result.b = A.b + B_div_C.b;
//	
//	if(!(isnan(result.a) && isnan(result.b))) printf("%.2lf %.2lf\n", result.a, result.b);
//	else printf("X\n");
//	
//	return 0;
//}
