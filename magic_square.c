#include <stdio.h>

int main()
{
	int n;

	//Prompt and read the 'n' value
	printf("Enter the value of 'n': ");
	scanf("%d", &n);

	//Declare the matrix
	int a[n][n];
	int i = n / 2, j = n - 1, num = 1;
	//int i = 0, j = 1, num = 1;

	//Logic
	a[i][j] = num++;

	while (num <= (n * n))
	{
		i = i - 1;
		j = j + 1;

		if (i == -1 && j == n)
		{
			i = 0;
			j = n - 2;
			a[i][j] = num++;
			continue;
		}

		if (i == -1)
		{
			i = n - 1;
		}
		if (j == n)
		{
			j = 0;
		}
		if (a[i][j] > 0)
		{
			i = i + 1;
			j = j - 2;
		}
		a[i][j] = num++;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
