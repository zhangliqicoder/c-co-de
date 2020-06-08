#include <Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int Yang[][5] = {
	{1,2,3,4,5},
	{2,3,4,5,6},
	{3,4,5,6,7},
	};
	int i = 0;
	int j = 4;
	int k = 0;
	scanf("%d", &k);
	while (i < 3 && j >= 0)
	{
		if (k < Yang[i][j])
		{
			j--;
		}
		else if(k>Yang[i][j])
		{
			i++;
		}
		else
		{
			printf("找到了\n");
			break；

		}
	}
	printf("没有找到\n");
	system("pause");
	return 0;
}