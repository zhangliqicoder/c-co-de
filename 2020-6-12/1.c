//��дһ�������������ɸ���������-1��־���������������е������
//����С��
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
//���������ѭ�����룬ͬʱ���Ǹ�ִֵֻ��һ�Σ����׳���