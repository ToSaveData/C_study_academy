#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i,j, N, x, y, dir = 0, cnt, cir = 0;
	char arr[100][100];

	scanf("%d", &N);
	if (N < 1 || N>100)
	{
		printf("input error");
		return 0;
	}
#if 1	
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			arr[i][j] = -1;
#else
	memset(arr, -1, sizeof(char) * N * N);
#endif 
	for (i = 0, x = 0, y = 0, cnt = 0; i < N * N; i++)
	{
		if (arr[x][y] != -1) {
			switch (dir % 3) {		// 다음 시작점
			case 0: 	x -= 2; y--;    break;
			case 1:     x++; y--;       break;
			case 2:	x++; y += 2;  break;
			}
			dir++;			// 방향 변경
			if (cir++ > 3) break;
		}
		else {
			// printf("%d : %d(%d, %d) \n", dir, cnt, x, y);
			cir = 0;
			switch (dir % 3)
			{
			case 0:			// 대각선
				arr[x++][y++] = cnt % 10;
				break;
			case 1:			// X 방향
				arr[x--][y] = cnt % 10;
				break;
			case 2:			// Y 방향
				arr[x][y--] = cnt % 10;
				break;
			};
			if ((y == (N - 1) && dir == 0) ||
				(x == 0 && dir == 1))
				dir++;
			cnt++;
		}
	}

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < N; i++)
		{
			if (arr[i][j] != -1)
				printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}