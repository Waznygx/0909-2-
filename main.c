#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////冒泡排序（顺序）
//int maopao(int arr[], int length)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < length - 1; i++)
//	{
//		for (j = 0; j < length - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//	return arr[j];
//}
//int main()
//{
//	int arr[] = { 2,6,5,7,44,13,76,74,33,34,36,31,53,49 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	maopao(arr, length);
//	for ( i = 0; i < length; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////不创建临时变量，实现两个数的交换
//void swap2(int a, int b)
//{
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("swap2\n");
//	printf("a=%d,b=%d\n", a, b);
//}
//void swap1(int a, int b)
//{
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("swap1\n");
//	printf("a=%d,b=%d\n", a, b);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("input:");
//	scanf("%d%d", &a, &b);
//	swap1(a, b);
//	swap2(a, b);
//	return 0;
//}

////求一个整数存储在二进制中1的个数
//int cal(int input)
//{
//	int i = 0;
//	int sum = 0;
//	for ( i = 0; i < 32; i++)
//	{
//		if (input & (1 << i))
//		{
//			sum++;
//		}
//	}
//	return sum;
//}
//int main()
//{
//	int input = 0;
//	printf("input:");
//	scanf("%d", &input);
//	printf("%d", cal(input));
//	return 0;
//}

//#include<string.h>
//int main()
//{
//	char a[1000];
//	for (int i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr1[90] = "hello world!";
//	//char arr2[50] = "a";
//	//strcat(arr2, arr1);
//	strncat(arr1, arr1, 3);
//	printf("%s", arr1);
//	return 0;
//}
int main()
{
	char arr1[] = "abcdefabcdef";
	char arr2[] = "def";
	char* ret = strstr(arr1, arr2);
	if (ret == NULL )
	{
		printf("not found!\n");
	}
	else
	{
		printf("found!%s", ret);
	}
	return 0;
}