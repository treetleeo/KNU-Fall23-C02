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
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("%d", primenumber(a));
	return 0;
}