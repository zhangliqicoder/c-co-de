#include <Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
#define RET 256
void show(char *p)
{
	int i = 0;
	int num = strlen(p);
	for (; i <num; i++)
	{
		printf("%c",*p++ );
	}
}
void leftrotation(char * src, int time)
{
	int i, j, tmp;
	int len = strlen(src);
	time %= len; //����Ϊ5������£���ת6��11��16...���൱��1�Σ�7��12��17...���൱��2�Σ��Դ����ơ�
	

	//ʵ������

	/*for (i = 0; i < time; i++)
	{
		tmp = src[0];
		for (j = 0; j < time; j++)
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;

	}*/




				 
				 
				 
				 //����k���ֽ�

//	for (i = 0; i < time; i++) //ִ��k�εĵ���ƽ��
//	{
//		tmp = src[len-1];
//		for (j = len-1; j >0; j--) //����ƽ��
//		{
//			src[j] = src[j -1];
//		}
//		src[j] = tmp;
//	}
//}


int main()
{
	char str1[RET];
	int k = 0;
	scanf("%s %d", str1,&k);
	printf("��תǰ:");
	show(str1);
	printf("\n");
	leftrotation(str1, k);
	printf("��ת��");
	show(str1);
	system("pause");
	return 0;
}