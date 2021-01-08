/*
Problem Statement: Implementation of Magic Sqaures:
===================================================
Explanation	 : A magic square of order n is a matrix of n rows and n columns, 
		   usually distinct integers, such that the n numbers in all rows,
		   all columns, and both diagonals sum to be equal to n(n*n+1)/2.
		   A magic square contains the integers from 1 to n*n. 
Algorithm	 : 1. Declare a matrix of n rows and n columns, which shall be
		      initiailised to 0.
		   2. For the first iteration we shall assigning the row iterator i
		      and column iterator j as i = n / 2 and j = n - 1
		   3. For further iterations i shall be incrementd by 1 and j shall
		      be decremented by 1
		   4. Conditions:
		   	If 1. Only i is below range, then i = n - 1
			   2. Only j is above range, then j = 0
			   3. Both are out of range, then i = 0 and j = n - 2
			   4. Any item is present in the respctive position of
			      i, j values, then increment i by 1 and decrement
			      j by 2.
			
*/


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
		 /* For further iterations i shall be incrementd by 1 and j shall
		    be decremented by 1
		 */

		if (i == -1 && j == n)
		{
			//If Both are out of range, then i = 0 and j = n - 2
			//assign the next value to respective i, j positions
		}

		if (i == -1)
		{
			//If Only i is below range, then i = n - 1
		}
		if (j == n)
		{
			//If Only j is above range, then j = 0
		}
		if (a[i][j] > 0)
		{
			/* If Any item is present in the respctive position of
			   i, j values, then increment i by 1 and decrement
			   j by 2.
			*/
		}
		a[i][j] = num++;
	}

	//Print the magic square matrix
}
