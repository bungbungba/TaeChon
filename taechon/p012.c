//#include <stdio.h>
//#include <float.h>> // nan(ind)��� ���� ���ϱ� ���� ������ ���
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
//	//�� ���
//	b_ = d * b;
//	c_ = d * c;
//
//	e_ = a * e;
//	f_ = a * f;
//
//	y = (c_ - f_) / (b_ - e_);
//	x = (c - y * b) / a;
//
//	if (_isnan(x) || _isnan(y)) //������ �ƴ��� �Ǻ�, nan(ind)
//	{
//		printf("NONE\n");
//		return 0;
//	}
//
//	printf("%.5lf %.5lf\n", x, y);
//	
//	return 0;
//}