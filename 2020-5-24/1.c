#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int checkdate(int *p)
{
	int tmp[7] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		if (tmp[p[i]])//利用哈希表的思路，一开始每个元素嗾使0.如过这个位置的标记已经为1，则代表重复，直接返回0.
		{
			return 0;
		}
		tmp[p[i]] = 1;
	}
	return 1;

}
int main()
{
	int a[5];
	for (a[0] = 1; a[0] <= 5; a[0]++)
	{
		for (a[1] = 1; a[1] <= 5; a[1]++)
		{
			for (a[2] = 1; a[2] <= 5; a[2]++)
			{
				for (a[3] = 1; a[3] <= 5; a[3]++)
				{
					for (a[4] = 1; a[4] <= 5; a[4]++)
					{
						if ((a[1] == 2) + (a[0] == 3)==1&&(a[1] == 2) + (a[4] == 4)==1&& (a[2] == 1) + (a[3] == 2)==1&&(a[2] == 5) + (a[3] == 3) +(a[4]==4)\
							+(a[1] == 1)==1&&checkdate(a)== 1)
						{
							for (int i = 0; i < 5; i++)
							{
								printf("%d", a[i]);
							}
							putchar('\n');
						}

					}
				}
			}
		}
	}


	system("pause");
	return 0;
}