#include <stdio.h>

int main()
{
	int n1, n2, n3, n4, n5;
	int num1=42139;

	n1 = num1 / 10000;
	n2 = num1 / 1000 - n1*10;
	n3 = num1 / 100 - n2 * 10 - n1 * 100;
	n4 = num1 / 10 - n3 * 10 - n2 * 100 - n1 * 1000;
	n5 = num1 / 1 - n4 * 10 - n3 * 100 - n2 * 1000 - n1 * 10000;
	
	printf("%d%4d%4d%4d%4d\n", n1, n2, n3, n4, n5);
	return 0;
} 
