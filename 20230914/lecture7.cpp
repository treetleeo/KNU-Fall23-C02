#include <stdio.h>

int main()
{
	int score;
	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A학점");
	}
	else if (score >= 80) {
		printf("B학점");
	}
	else if (score >= 70) {
		printf("C학점");
	}
	else if (score >= 60) {
		printf("D학점");
	}
	else if (score >= 50)
	{
		printf("F학점");
		}
	return 0;

}