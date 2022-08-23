#include <stdio.h>

int main()
{
	int a, b, c, n, m = 0, i, flag = 0, cnt =1;
	int arr[30];
	int k[30];
	
	for(i=0;i<30;i++)
	{
		arr[i] = 20;
		k[i] = 20;
	}
	
	do 
	{
		if (flag == 1)
			printf("input error");
		scanf("%d%d%d", &a, &b, &c);
		flag = 1;
	} while (a < 100 || a > 999 || b < 100 || b > 999 || c < 100 || c > 999);
	
	n = a * b * c;

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
		{
			arr[i] = n % 10;
		}
		else if (i == 1)
		{
			m = (n / 10);
			arr[i] = m;
		}
		else if (i > 1)
		{
			if (i > 1 && m == 0)
			{
				cnt = i;
				cnt--;
				break;
			}
			else
			{
				m /= 10;
				arr[i] = m;
			}
		}
		
	}	
	
	for (i = 0; i < cnt; i++)
	{
		if (i == 0)
			{
			arr[i+11] = arr[i];
			}
		else if (i >= 1)
		{
			if (i >= 1 && arr[i] == 20)
			{
				break;
			}
			else
			{
				arr[i + 11] = arr[i] - (arr[i + 1] * 10);
			}
		}
	}

	for (i = 11; i < 11 + cnt; i++)
	{
		 if(arr[i] ==0)
			{if (k[0] == 20)
				k[0] = 1;
			else if( k[0] != 20 && k[0]>=1)
				k[0]++; }
		 else if (arr[i] == 1)
			{if (k[1] == 20)
				k[1] = 1;
			else if (k[1] != 20 && k[1] >= 1)
				k[1]++; }
		 else if (arr[i] == 2)
			{if (k[2] == 20)
				k[2] = 1;
			else if (k[2] != 20 && k[2] >= 1)
				k[2]++; }
		 else if (arr[i] == 3)
			{if (k[3] == 20)
				k[3] = 1;
			else if (k[3] != 20 && k[3] >= 1)
				k[3]++; }
		 else if (arr[i] == 4)
			{if (k[4] == 20)
				k[4] = 1;
			else if (k[4] != 20 && k[4] >= 1)
				k[4]++; }
		 else if (arr[i] == 5)
			{if (k[5] == 20)
				k[5] = 1;
			else if (k[5] != 20 && k[5] >= 1)
				k[5]++; }
		 else if (arr[i] == 6)
			{if (k[6] == 20)
				k[6] = 1;
			else if (k[6] != 20 && k[6] >= 1)
				k[6]++; }
		 else if (arr[i] == 7)
			{if (k[7] == 20)
				k[7] = 1;
			else if (k[7] != 20 && k[7] >= 1)
				k[7]++; }
		 else if (arr[i] == 8)
			{if (k[8] == 20)
				k[8] = 1;
			else if (k[8] != 20 && k[8] >= 1)
				k[8]++; }
		 else if (arr[i] == 9)
			{if (k[9] == 20)
				k[9] = 1;
			else if (k[9] != 20 && k[9] >= 1)
				k[9]++; }
	}

	for (i = 0; i < 10; i++)
	{
		if (k[i] != 20 && k[i] <= 9)
			printf("%d\n", k[i]);
		else
		{
			k[i] = 0;
			printf("%d\n", k[i]);
		}
	}

	return 0;
}