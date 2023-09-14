#include <stdio.h>

int main()
{
	int year;
	printf("연도를 입력하십시오 : ");
	scanf_s("%d", &year);

	int yy = (year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0);

	if (yy)
		printf("윤년입니다.\n");
	else
		printf("윤년이 아닙니다.\n");
	return 0;
}