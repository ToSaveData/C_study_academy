#include <iostream>
using namespace std;

int main()
{
	int i, j, x, y, n, cnt = 1, dir = 0, add = 0;
	int arr[100][100] = { 0 };

	cin >> n;
	if (n < 0 || n>100)
	{
		cout << "input error" << endl;
		return 0;
	}

	for (i = 1; i <= n; i++)
		add += i;

	for (i = 0, x = 0, y = 0; i < add; i++)
	{
		switch (dir % 4)
		{
		case 0: //1번만
			arr[x++][y] = cnt++;
			break;

		case 1: // 1번, 3번 
			arr[x--][y++] = cnt++;
			break;

		case 2: //1번만
			arr[x][y++] = cnt++;
			break;

		case 3: //2번, 4번
			arr[x++][y--] = cnt++;
			break;
		}
		if (x != 0 && y == 0)
			dir++;
		else if (x == 0 && y != 0)
			dir++;
	}

	dir = 0;

	
	if (n % 2 == 1) 
	{
		for (i = 0, x = n - 1, y = 1; i < (n * n) - add; i++)
		{
			switch (dir % 4)
			{
			case 0:
				arr[x--][y++] = cnt++;
				break;

			case 1:
				arr[x++][y] = cnt++;
				break;

			case 2:
				arr[x++][y--] = cnt++;
				break;

			case 3:
				arr[x][y++] = cnt++;
				break;
			}
			//cout << dir << " (" << x << ", " << y << ")" << endl;
			if (x == n - 1 && y != 0)
				dir++;
			else if (x != 0 && y == n - 1)
				dir++;
		}
	}
	else
	{
		for (i = 0, x = 1, y = n - 1; i < (n * n) - add; i++)
		{
			switch (dir % 4)
			{
			case 0:
				arr[x++][y--] = cnt++;
				break;

			case 1:
				arr[x][y++] = cnt++;
				break;

			case 2:
				arr[x--][y++] = cnt++;
				break;

			case 3:
				arr[x++][y] = cnt++;
				break;
			}
			//cout << dir << " (" << x << ", " << y << ")" << endl;
			if (x == n - 1 && y != 0)
				dir++;
			else if (x != 0 && y == n - 1)
				dir++;
		}
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}