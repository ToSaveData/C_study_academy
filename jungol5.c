#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n;
	do {
		scanf("%d", &n);
	} while (n < 2 || n>2100000000);
	
	int sq; // N�� �������� �����ϱ� ����
	int arr[10000], cnt = 0, tmp; // N�� ����� �����ϱ� ����
	sq = (int)sqrt(n); // N�� �������� ���Ͽ� sq�� �����Ѵ�.
	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			arr[cnt++] = i; // ������ ����
			if (n / i != i)
				arr[cnt++] = n / i; // ū�� ���� (�������� ���� ���� ���)
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			
			}
	
		}
	}
	


	return 0;
}