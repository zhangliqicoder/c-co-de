//��ʮ����ת��Ϊ2���ƣ�ͬʱ��Ҫ��ӵ͵���λ������������ĸ�λ
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