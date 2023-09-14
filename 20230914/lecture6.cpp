#include <stdio.h>
int main()
{
	int a;
	printf("정수 입력 : ");
	scanf_s("%d", &a);

	if (a > 0)
		printf("입력한 정수 %d는(은) 양의 정수 입니다.\n", a);
	if (a < 0)
		printf("입력한 정수 %d는(은) 음의 정수 입니다.\n", a);
	if (a == 0)
		printf("입력한 정수 %d는(은) 0 입니다.\n", a);
	return 0;

}