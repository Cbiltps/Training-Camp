#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>

int main()
{
	int q, w, e, r, t;
	scanf("%d %d %d %d %d", &q, &w, &e, &r, &t);
	float a = (q + w + e + r + t) / 5.0;
	printf("%.1f\n", a);
	return 0;
}