

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
//		printf("ù ��° ���� �� Ŀ�� �մϴ�.\n");
//	} while (i<j);
//	
//	printf("%d * %d = %d\n%d / %d = %d", i, j, i * j, i, j, i / j);
//}
//
//�� ���� ������ �Է¹޾Ƽ�,
//ù ��° �ٿ��� �� ������ ���� ������ 1 �ƴϸ� 0�� ����ϰ�,
//�� ��° �ٿ��� ���� ������ 1 ������ 0�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

//2���� ������ �Է� �޾Ƽ� ù ��° ���� �� ��° ���� ���� ���� ����ϰ�, 
//ù ��° ���� �Ǽ��� ��ȯ�Ͽ� �� ��° ���� ���� ���� ���� �� 
//�ݿø��Ͽ� �Ҽ� ��° �ڸ����� ����ϴ� ���α׷��� �ۼ��ϰ�,
//���α׷� ���뿡 ���� ������ �ּ����� ǥ���Ͻÿ�.

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