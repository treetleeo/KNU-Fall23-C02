#include <stdio.h>
int main()
{
	int score;
	printf("���� �Է� : ");
	scanf_s("%d", &score);
	
	if (score > 100 || score < 0) {
		printf("�߸� �Է��߽��ϴ�.\n");
		return 0;
	}
	

	int a = score / 10;
	switch (a) {
	case 10: printf("A����\n"); break;
	case 9: printf("A����\n"); break;
	case 8: printf("B����\n"); break;
	case 7: printf("C����\n"); break;
	case 6: printf("D����\n"); break;
	default: printf("F����\n");
	}
}