#include<stdio.h>
void swap(int* a, int* b);
int main()
{
	int a, b;
	a = 10;
	b = 565;

	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
void swap(int* a, int* b)
{

}