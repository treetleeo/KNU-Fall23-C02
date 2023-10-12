#include <stdio.h>
void sort(int* arr[5]);
int main()
{
	int arr[5] = { 0,1,2,3,4 };
	int i, j;
	j = 5;
	for(i = 0; i < j; i++)
	printf("%d",arr[i]);
	sort(&arr);
	for (i = 0; i < j; i++)
		printf("%d", arr[i]);
}
void sort(int* arr[5])
{
	
}