#include <stdio.h>
void calculator(int selector)
{
	double num1, num2;
	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	elseif(selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
}
int main()
{
	int sel;
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������ : ");
	scanf_s("%d", &sel);
	calculator(sel);
}