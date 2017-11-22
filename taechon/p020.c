//#include <stdio.h>
//#include <math.h>
//
//typedef struct {
//	double real;
//	double imag;
//} COMPLEX;
//
//int main()
//{
//	COMPLEX x, y, result_multi, result_div;
//
//	scanf("%lf %lf", &x.real, &x.imag);
//	scanf("%lf %lf", &y.real, &y.imag);
//
//	result_multi.real = ((x.real * y.real) - (x.imag * y.imag));
//	result_multi.imag = ((x.real * y.imag) + (x.imag * y.real));
//
//	result_div.real = ((x.real * y.real) + (x.imag * y.imag)) / ((y.real * y.real) + (y.imag * y.imag));
//	result_div.imag = ((x.imag * y.real) - (x.real * y.imag)) / ((y.real * y.real) + (y.imag * y.imag));
//
//	printf("%.lf %.lf\n", result_multi.real, result_multi.imag);
//
//	if (!(isnan(result_div.real) || isnan(result_div.imag)))
//		printf("%.2lf %.2lf\n", result_div.real, result_div.imag);
//	else
//		printf("NONE\n");
//
//	return 0;
//}
