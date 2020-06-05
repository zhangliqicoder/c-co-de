#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{
	double a ;
	printf("please enter a socre:");
	scanf("%lf", &a);
	int c = a / 10;
	switch (c)
	{
	case 9:
	case 10:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default :
		printf("E");
	}
	system("pause");
	return 0;
}