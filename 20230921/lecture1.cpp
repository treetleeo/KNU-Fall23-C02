#include <stdio.h>
int primenumber(int num)
{

	for (int div = num - 1; div > 1; div--)
	{
		if (num % div == 0) return 0;
	}
	return 1;
}
int main()
{
	int a;
	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("%d", primenumber(a));
	return 0;
}