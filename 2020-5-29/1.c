
//#include <Windows.h>
//#include <stdio.h>
//#pragma warning(disable:4996)
//print_arr1(int arr2[3][5], int a, int b)
//{
//	int i = 0;
//	for (; i < a; i++)
//	{
//		int j = 0;
//		for (; j < b; j++)
//		{
//			printf("%d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//}
//print_arr2(int(*arr)[5], int a, int b)
//{
//	int i = 0;
//	for (; i < a; i++)
//	{
//		int j = 0;
//		for (; j < b; j++)
//		{
//			printf("%d", *(*(arr+i)+j));//这里理解相当于*(arr+i)取每行的解引用，然后*（*（arr+i）+j）相当于对每行进行遍历：
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	print_arr2(arr, 3, 5);
//	system("pause");
//	return 0;
//}
#include <Windows.h>
#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a[3] = { 1,2,4};
	int(*b)[3] = &a;
	printf("%p\n", b);
	printf("%p\n", b + 1);
	/*int a[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	printf("%p\n", a);
	printf("%p\n", &a);
	printf("%p\n", a + 1);
	printf("%p\n", &a + 1);*/
	system("pause");
	return 0;
}




























