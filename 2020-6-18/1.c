
#include<Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char str[] = "memmove can be very useful..";
	memmove(str + 1, str + 2, 3);//��str�ĵ�2��Ԫ��������3���ַ�
	printf("%s\n", str);//���Ƹ���str��1λ�ÿ�ʼ����
	system("pause");
	return 0;
}
//��memcpy�Ĳ�����ôômove���������ԭ�ڴ���Ŀ���ڴ���ǿ���
//�ص��ģ���������ص����͵�ʹ��memmove��������


//memmove()������ģ��
void *My_memmove(void *dst, void *src, size_t count)
{
	void *ret = dst;
	if(dst<src&&((char *)dst+count)>(char *)src)
	while (count--)
	{
		*(char *)dst = *(char *)src;
		dst = (char *)dst + 1;
		src = (char *)src + 1;

	}
	else
	{
		dst = (char *)dst + count - 1;
		src = (char *)src + 1;
		while (count--)
		{
			*(char *)dst = *(char *)src;
			dst = (char *)dst -1;
			src = (char *)src - 1;
	
		}
	}
	return ret;
}
int mian()
{
	char str[] = "abcdefgf";
	My_memmove(str + 1, str + 2, 3);
	printf("%s\n", str);
	system("pause");
	return 0;
}