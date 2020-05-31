#include "cal.h"
int Myadd(int x, int y)
{
	return x + y;
}
int Mysub(int x, int y)
{
	return x - y;
}
int Mymul(int x, int y)
{
	return x*y;
}
int Mydiv(int x, int y)
{
	if (0 == y)
	{
		printf("waring:div 0:");
		return -1;
	}
	else
	{
		return x / y;
	}
}