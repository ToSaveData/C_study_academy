#include <stdio.h>

int main()
{
	int i, j, N, p, x, y, dir = 0, cnt = 0;
	int arr[100][100];

	scanf("%d", &N);
	if (N < 1 || N>100)
	{
		printf("input error");
		return 0;
	}
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			arr[i][j] = -1;
		}
	}

	for (i = 0, p = 0, x = 0, y = 0, cnt = 0; i < N * N; i++)
	{
		if (arr[x][y] != -1) {
			if (dir % 3 == 0) {
				x -= 2; y--;
			}
			if (dir % 3 == 1) {
				x++; y--;
			}
			if (dir % 3 == 2) {
				x++; y += 2;
			}
			dir++;
		}
		else {
			//printf("%d : %d(%d, %d) \n", dir, cnt, x, y);
			switch (dir % 3)
			{
			case 0:					//대각선 방향
				arr[x++][y++] = cnt++;
				break;
			case 1:					//x방향
				arr[x--][y] = cnt++;
				break;
			case 2:					//y방향
				arr[x][y--] = cnt++;
				break;
			};
			if ((y == (N - 1) && (dir) == 0) ||
				(x == 0 && (dir) == 1))
				dir++;
		}
	}

	for (j = 0; j < N; j++)
	{
		for (i = 0; i < N; i++)
		{
			if (arr[i][j] != -1) 
				printf("%d ", arr[i][j]%10);  
		}
		printf("\n");
	}
	return 0;
}

	//for (i = 0; i < N; i++)
	//{
	//	for (j = 0; j < i; j++)
	//	{
	//		if (j == i)
	//		{
	//			printf("%d ", num1);
	//			num1++;
	//			if (10 == num1)
	//				num1 = 0;
	//		}

	//		else if (j == i - 1 && i >= 1)
	//		{
	//			printf("%d ", num2);
	//			num2 += 2;
	//			if (num2 >= 10)
	//				num2 -= 10;
	//		}
	//		else if (j == 0)
	//			printf("");
	//	}
	//	printf("\n");
	//}
