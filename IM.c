#include <stdio.h>

int main()
{
	int N, M, arr[305] = { 0 }; //N�� ��������, M�� �׷� ��
	int i, j, s, MAX;

	printf("��������, �׷� ��: ");
	do {
		scanf("%d%*c %d%*c", &N, &M);
		if (N > 300 || M > N)
			printf("�ٽ�");
	} while (N > 300 || M > N);

	printf("\n���� ���� %d��\n", N);

	for (i = 0; i < N; i++)
	{
		do {
			scanf("%d", &s);
			if (s > 100)
				printf("100���� ���� ��");
		} while (s > 100);
		arr[i] = s;
	}
	return 0;
}
