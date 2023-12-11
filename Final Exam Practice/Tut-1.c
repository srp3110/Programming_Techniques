#include <stdio.h>

int main()
{
	int in, X[20], n1, n2;

	for (n1 = 0; n1 < 20; n1++)
	{
		printf("Enter a number between 10 - 100: ");
		scanf("%d", &X[n1]);

		if (n1 != 0)
		{
			for (n2 = 0; n2 < n1; n2++)
			{
				if (X[n1] == X[n2])
				{
					break;
				}
			}
		}
		else
		{
			printf("%d\n", X[n1]);
		}

		if (n2 == n1)
		{
			printf("%d\n", X[n1]);
		}
		
	}
	return 0;
}
