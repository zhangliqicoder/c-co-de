#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int mul(int _n)
{
	int i = 0;
	int p = 1;
	for (i = 1; i < _n + 1; i++)
	{
		p *= i;

	}
	return p;
}
int main()
{
	int n;
	int i = 0;
	int result= 0;
	scanf("%d", &n);
	for (i = 1; i < n + 1; i++)
	{
		result += mul(i);
		if (i == n)
		{
			printf("%d!", i);
		}
		else
		{
			printf(" %d!+", i);
		}
	}

	printf("%d\n", result);
	system("pause");
		return 0;

}