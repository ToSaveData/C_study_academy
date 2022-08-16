#include <stdio.h>

int main()
{
	int i, j, n1, n2 = 1;
	do {
		scanf("%d", &n1);
	} while (n1 > 100 || n1 < 0);

	for (i = 0; i < n1; i++)
	{	
		for (j = 0; j < n1; j++)
		{
			if (i <= j)
				printf("%c ", ((n1-j) % 26) + 'A');
			else
				printf(" ");
			n2++;
		}
		printf("\n");
	}
	return 0;
}