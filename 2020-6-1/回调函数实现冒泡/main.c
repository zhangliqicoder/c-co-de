#include "cal.h"
int main()
{
	int arr[] = { 1,3,5,7,9,2,15,90,80,4 };
	int num = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, num, sizeof(int), int_cmp);
	int i = 0;
	for(;i<num;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}