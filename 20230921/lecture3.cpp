#include <stdio.h>
int factorial(int num)
{
	if (num == 0) return 1;
	return num * factorial(num - 1);
}
int main()
{
	int a;
	printf("����� ���丮�� �� �Է� : ");
	scanf_s("%d", &a);
	printf("%d\n", factorial(a));
	return 0;
}