#include "cal.h"
int int_cmp(const void *p1, const void *p2)
{
	return (*(int *)p1 - *(int *)p2);
}
void _swap(void *p1, void *p2, int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		char temp = *((char *)p1+i);
		*((char *)p1 + i) = *((char *)p2 + i);
		*((char *)p2 + i) = temp;
	}
}
void bubble(void *base, int count, int size, int(*cmp)(void*, void*))
{
	int i = 0;
	for (; i < count - 1; i++)
	{
		int j = 0;
		for (; j < count - i - 1; j++)
		{
			if (cmp((char *)base + j * size, (char *)base + (j + 1)*size) > 0)
			{
				_swap((char *)base + j * size, (char *)base + (j + 1)*size, size);
			}
		}
	}
}
