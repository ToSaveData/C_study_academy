#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, n;
	do {
		scanf("%d", &n);
	} while (n < 2 || n>2100000000);
	
	int sq; // N의 제곱근을 저장하기 위해
	int arr[10000], cnt = 0, tmp; // N의 약수를 저장하기 위해
	sq = (int)sqrt(n); // N의 제곱근을 구하여 sq에 저장한다.
	for (i = 1; i <= sq; i++)
	{
		if (n % i == 0)
		{
			arr[cnt++] = i; // 작은수 저장
			if (n / i != i)
				arr[cnt++] = n / i; // 큰수 저장 (작은수와 같지 않을 경우)
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