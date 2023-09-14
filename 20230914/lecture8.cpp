#include <stdio.h>
int main()
{
	int score;
	printf("점수 입력 : ");
	scanf_s("%d", &score);
	
	if (score > 100 || score < 0) {
		printf("잘못 입력했습니다.\n");
		return 0;
	}
	

	int a = score / 10;
	switch (a) {
	case 10: printf("A학점\n"); break;
	case 9: printf("A학점\n"); break;
	case 8: printf("B학점\n"); break;
	case 7: printf("C학점\n"); break;
	case 6: printf("D학점\n"); break;
	default: printf("F학점\n");
	}
}