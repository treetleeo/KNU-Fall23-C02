#include<stdio.h>
int main()
{
	int score[5] = { 87,92,94,65,33 };
	int cnt;
	printf("첫 번째 요소 : %p\n", arr[0]); 
	int p_score = score;
	for (int i = 0; i < 3; i++)
	{
		printf("%d\n", *p_score);
		p_score++
	}
}