

//int main()
//{
//	int i,k ;
//	
//	printf("height = ");
//	scanf("%d", &i);  
//	
//	printf("\nyour height is %dcm\n", i);
//
//
//	return 0;
//}
//
//int main()
//{
//	int i, j;
//	scanf("%d", &i);
//	do
//	{
//		scanf("%d", &j);
//		if(i<j)
//		printf("첫 번째 수가 더 커야 합니다.\n");
//	} while (i<j);
//	
//	printf("%d * %d = %d\n%d / %d = %d", i, j, i * j, i, j, i / j);
//}
//
//두 개의 정수를 입력받아서,
//첫 번째 줄에는 두 정수의 값이 같으면 1 아니면 0을 출력하고,
//두 번째 줄에는 같지 않으면 1 같으면 0을 출력하는 프로그램을 작성하시오.

//2개의 정수를 입력 받아서 첫 번째 수를 두 번째 수로 나눈 몫을 출력하고, 
//첫 번째 수를 실수로 변환하여 두 번째 수로 나눈 값을 구한 후 
//반올림하여 소수 둘째 자리까지 출력하는 프로그램을 작성하고,
//프로그램 내용에 관한 설명을 주석으로 표시하시오.

#include <stdio.h>

int main()
{
    float i;
    scanf("%f", &i);
    
    if (i > 88.45)
        printf("Heavyweight");
    else if(i<=88.45 && i>72.57)
        printf("Cruiserweight");
    else if (i <= 72.57 && i > 61.23)
        printf("Middleweight");
    else if (i <= 61.23 && i > 50.80)
        printf("Lightweight");
    else if (i <= 50.80)
        printf("Flyweight");
    
    return 0;
}