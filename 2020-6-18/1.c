
#include<Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	char str[] = "memmove can be very useful..";
	memmove(str + 1, str + 2, 3);//从str的第2的元素往后面3个字符
	printf("%s\n", str);//复制给从str的1位置开始往后
	system("pause");
	return 0;
}
//和memcpy的差别就是么么move函数处理的原内存块和目标内存块是可以
//重叠的，如果出现重叠，就得使用memmove函数处理


//memmove()函数的模拟
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