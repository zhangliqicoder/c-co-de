#include <Windows.h>
#include <stdio.h>
#include <assert.h>
#pragma warning(disable:4996)
//int main()
//{
//	char *str1 = "1234ab";
//	char str2[] = "abcdef";
//	int ret1 = strlen(str1);//strlen ��������ֵΪ���ַ������ַ��ĸ�������������\0��
//	int ret2 = strlen(str2);
//	printf("%d %d\n", ret1, ret2);
//	system("pause");
//	return 0;
//}
// 

//ģ��strlen������һ�ַ���
//int My_strlen(char *p)
//{
//	assert(p != NULL);
//	int count = 0;
//	while (*p)
//	{
//		count += 1;
//		p++;
//
//	}
//	return count;
//
//}

//�ڶ��ַ���
//int My_strlen(char *p)
//{
//	char *s = p;
//	while (*s)//ע��ѭ������
//	{
//		s++;//�ƶ�ָ��ָ��ĵ�ַ
//	}
//	return s - p;//ָ��������ǵõ��������Ԫ�صĸ���
//
//}

//�����ַ�����
int My_strlen(char *p)
{
	if(*p=='\0')
	{
		return 0;
	}
	else
	{
		return 1 + My_strlen(p+1);
	}

}
int main()
{
	const char *str1 = "12345678910";
	int ret = My_strlen(str1);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
