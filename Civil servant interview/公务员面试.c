#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int ter(const void* e1, const void* e2)
{
	double z= *(double* )e1 - *(double* )e2;
	if (z > 0)
	{
		return 1;
	}
	else if (z < 0)
	{
		return -1;
	}
	return 0;
}
int main()
{
	double q = 0, w = 0, e = 0, r = 0, t = 0, y = 0, u = 0;
	double i = 0;
	int x = 0, k = 0;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf",
		         &q, &w, &e, &r, &t, &y, &u) != EOF)
	{
		i = 0;
		double a[] = { q,w,e,r,t,y,u };
		k = sizeof(a) / sizeof(a[0]);
		qsort(a, k, sizeof(a[0]), ter);
		for (x = 1; x <= 5; x++)
		{
			i += a[x];
		}
		i /= 5;
		printf("%.2lf\n", i);
	}
	return 0;
}