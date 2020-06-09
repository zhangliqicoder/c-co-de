#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int  *str[10] = {1,2,3,4,5,6};
	printf("%d\n", str[0]);

	system("pause");
	return 0;
}