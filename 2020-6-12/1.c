//编写一个程序输入若干个整数，以-1标志输入结束，输出其中的最大数
//和最小数
#include <windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int k = 0;
	int max = 0;
	int min = 0;
	int first = 1;
	while (1)
	{
		scanf("%d", &k);
		if (-1 == k)
		{
			break;
		}
		if (first)
		{
			first = 0;
			max = min = k;
		}
		if (k > max)
		{
			max = k;
		}
		else if (k < min)
		{
			min = k;
		}
	}
	printf("max=%d min=%d\n", max, min);
	system("pause");
	return 0;
}
//这里题点是循环输入，同时就是赋值只执行一次（容易出错）