#include <stdio.h>

int intReverse(int num);

int main()
{
	int num1,num2,num;
    printf("Enter a 3-digit num: ");
    scanf("%d",&num1);
    printf("Enter a 3-digit num: ");
    scanf("%d",&num2);

    intReverse(num1);
    intReverse(num2);

    printf("\nThe 1st reverse order is: %d ",intReverse(num1));
    printf("\nThe 2nd reverse order is: %d ",intReverse(num2));

	return 0;
}

int intReverse(int num){
    int n1,n2,n3,newNum;

    n1 = num%10;
    n2 = (num/10)%10;
    n3 = (num/100)%10;

    newNum = n1*100+n2*10+n3;
    return newNum;
}