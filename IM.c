#include <stdio.h>

int main()
{
	int N, M, arr[305] = { 0 }; //N은 구슬갯수, M은 그룹 수
	int i, j, s, MAX;

	printf("구슬갯수, 그룹 수: ");
	do {
		scanf("%d%*c %d%*c", &N, &M);
		if (N > 300 || M > N)
			printf("다시");
	} while (N > 300 || M > N);

	printf("\n숫자 나열 %d개\n", N);

	for (i = 0; i < N; i++)
	{
		do {
			scanf("%d", &s);
			if (s > 100)
				printf("100보다 작은 수");
		} while (s > 100);
		arr[i] = s;
	}
	return 0;
}
