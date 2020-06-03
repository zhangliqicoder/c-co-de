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
	time %= len; //长度为5的情况下，旋转6、11、16...次相当于1次，7、12、17...次相当于2次，以此类推。
	

	//实现左旋

	/*for (i = 0; i < time; i++)
	{
		tmp = src[0];
		for (j = 0; j < time; j++)
		{
			src[j] = src[j + 1];
		}
		src[j] = tmp;

	}*/




				 
				 
				 
				 //右旋k个字节

//	for (i = 0; i < time; i++) //执行k次的单次平移
//	{
//		tmp = src[len-1];
//		for (j = len-1; j >0; j--) //单次平移
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
	printf("旋转前:");
	show(str1);
	printf("\n");
	leftrotation(str1, k);
	printf("旋转后：");
	show(str1);
	system("pause");
	return 0;
}