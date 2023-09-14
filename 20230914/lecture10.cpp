#include <stdio.h>

int main()
{
	int i, j, k;
	i = 10;
	for (k = 2; k < i; k++)
	{
		if (k == 5)
			continue;
		for (j = 1; j < i; j++) {
			int result = j * k;
			printf("%d x %d = %d\n", k, j, result);
		}
	}
	return 0;
}