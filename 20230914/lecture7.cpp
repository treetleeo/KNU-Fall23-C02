#include <stdio.h>

int main()
{
	int score;
	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score >= 90) {
		printf("A����");
	}
	else if (score >= 80) {
		printf("B����");
	}
	else if (score >= 70) {
		printf("C����");
	}
	else if (score >= 60) {
		printf("D����");
	}
	else if (score >= 50)
	{
		printf("F����");
		}
	return 0;

}