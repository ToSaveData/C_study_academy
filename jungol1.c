#include <stdio.h>

int main()
{
	printf("Fun Programming! \n"); //Fun Programming!
	printf("Programming! It's fun.");//Programming! It's fun.
	printf("My name is Hong Gil Dong. \nI am 13 years old.");//My name is Hong Gil Dong.\n am 13 years old.
	printf(" //(@) (@)\n(= ^ . ^= )\n(-m - m - )\n"); //(@) (@)
												    //(= ^ . ^= )
												    //(-m - m - )

	char i[10] = { 'i','t','e','m'};
	char c[10] = { 'c','o','u','n','t'};
	char p1[10] = { 'p','r','i','c','e' };
	char p2[10] = { 'p', 'e', 'n' };
	char n[10] = { 'n', 'o', 't', 'e'};
	char e[10] = { 'e', 'r', 'a','s','e','r'};

	printf("%10s%10s%10s\n", i,c,p1);
	printf("%10s%10d%10d\n", i,20,100);
	printf("%10s%10d%10d\n", n,5,95);
	printf("%10s%10d%10d\n", e,110,97);

	/*	item     count     price
		pen        20       100
		note         5        95
		eraser       110        97*/
	
	return 0;
}