//把十进制转换为2进制，同时按要求从低到高位输出二进制数的个位
#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
int main()
{
	int i = 0;
	int k = 0;
	scanf("%d", &k);
	while (k)
	{
	 int num= k % 2;
		i++;
		k /= 2;
		printf("%d", num);
	}

	system("pause");
	return 0;
}