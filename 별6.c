#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	if (n >= 1 && n <= 100)
	{
		
		for (int i = 1; i <= n; i++)
		{
			for (int k = i; k <= n - 1; k++)
			{
				printf(" ");
			}
			printf("*");
			for (int j = 1; j < 2 * (i - 1); j++)
			{
				printf(" ");
			}
			if (i != 1)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}