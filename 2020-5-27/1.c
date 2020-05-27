#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int p = 9;
	float *s = (float *)&p;
	printf("%d\n", p);
	printf("%f\n", p);
	*s = 9.0;
	printf("%d\n", p);
	printf("%f", p);
	system("pause");
	return 0;
}