#include <stdio.h>
int main()
{
	int i, j;
	i = 2;
	j = 1;

	while (i < 10)
	{
		if (i == 5) {
			i++;
			continue;
		}
		while (j < 10) {
			printf("%d x %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
		j = 1;
	}
	return 0;
}