#include <stdio.h>
void calculator(int selector)
{
	double num1, num2;
	printf("숫자 1을 입력하시오 : ");
	scanf_s("%lf", &num1);

	printf("숫자 2을 입력하시오 : ");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	elseif(selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
}
int main()
{
	int sel;
	printf("1.더하기 2.빼기 3.곱하기 4.나누기 : ");
	scanf_s("%d", &sel);
	calculator(sel);
}