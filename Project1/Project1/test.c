#include<stdio.h>
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = arr[left];
//		left++;
//		right--;
//     }
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}
  /*  int main()
	{
		int arr1[] = {1,3,5,7,9};
        int arr2[] = { 2,4,6,8,10};
		int tmp = 0;
		int i = 0;
		int sz = sizeof(arr1) / sizeof(arr1[0]);
		for (i = 0; i < sz; i++)
		{
			tmp = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = tmp;

		}

	}*/
int count_bit_one(int n)
{
	int count = 0;
	while (n)
	{
		n=n& (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int a = 0;
	scanf("%d", &a);
	int count = count_bit_one(a);
	printf("count=%d\n", count);
	return 0;
}