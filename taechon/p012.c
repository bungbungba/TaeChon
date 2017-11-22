//#include <stdio.h>
//#include <float.h>> // nan(ind)라는 값을 비교하기 위해 선언한 헤더
//
//int main()
//{
//	double a, b, c, d, e, f;
//	double b_, c_, e_, f_;
//	double x, y, result;
//
//	scanf("%lf %lf %lf", &a, &b, &c);
//	scanf("%lf %lf %lf", &d, &e, &f);
//	
//	//근 계산
//	b_ = d * b;
//	c_ = d * c;
//
//	e_ = a * e;
//	f_ = a * f;
//
//	y = (c_ - f_) / (b_ - e_);
//	x = (c - y * b) / a;
//
//	if (_isnan(x) || _isnan(y)) //수인지 아닌지 판별, nan(ind)
//	{
//		printf("NONE\n");
//		return 0;
//	}
//
//	printf("%.5lf %.5lf\n", x, y);
//	
//	return 0;
//}