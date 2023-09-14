#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	printf("1.정수 입력 : ");
	scanf_s("%d", &num);
	printf("2.입력한 정수의 값은 %d 입니다.", num);
	return 0;
}