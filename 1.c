#include <Windows.h>
#include <stdio.h>
#include <assert.h>
#pragma warning(disable:4996)
//int main()
//{
//	char *str1 = "1234ab";
//	char str2[] = "abcdef";
//	int ret1 = strlen(str1);//strlen 函数返回值为其字符串中字符的个数，不包含‘\0’
//	int ret2 = strlen(str2);
//	printf("%d %d\n", ret1, ret2);
//	system("pause");
//	return 0;
//}
// 

//模拟strlen（）第一种方法
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

//第二种方法
//int My_strlen(char *p)
//{
//	char *s = p;
//	while (*s)//注意循环条件
//	{
//		s++;//移动指针指向的地址
//	}
//	return s - p;//指针相减就是得到其遍历的元素的个数
//
//}

//第三种方法：
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
