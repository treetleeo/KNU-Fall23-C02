#include <stdio.h>
int main()
{
	int a;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	if (a > 0)
		printf("�Է��� ���� %d��(��) ���� ���� �Դϴ�.\n", a);
	if (a < 0)
		printf("�Է��� ���� %d��(��) ���� ���� �Դϴ�.\n", a);
	if (a == 0)
		printf("�Է��� ���� %d��(��) 0 �Դϴ�.\n", a);
	return 0;

}