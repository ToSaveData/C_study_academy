#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, a, b, r=0; //a�� ���̽� ��, b�� �ٵ����� ũ��, r�� ���� �� �ִ� ���� ��
	char arr[102][102] = {0};

	printf("TEST CASE ? ");
	scanf("%d", &a);

	for (i = 1; i <= a; i++) //�ٵ��� ����
	{
		do {
			printf("�ٵ����� ũ��(8 <= N <= 100) ? ");
			scanf("%d", &b);
		} while (b < 8 || b>100);
		

		for (j = 0; j < b; j++)
		{
		
			for (k = 0; k < b; k++)
			{
				if (arr[j][k] != 'X')
				{
					arr[j][k] = 'L';
					printf("%c ", arr[j][k]);
				}
				
				else
				{
					arr[j][k] = 'H';
					printf("%c ", arr[j][k]);
				}
			}
			printf("\n");
		}

		for (j = 0; j < b; j++)
		{
			for (k = 0; k < b; k++)
			{
				if (arr[j][k] == 'H')
					r++;
			}
		}

		printf("#%d %d\n", i, r);
		r = 0;
		
	}

	return 0;
}
