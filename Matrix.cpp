#include <iostream>

int main()
{
	int Matrix[5][5]; // In a bidimensional matrix, the first number we declare is the lines and the second is columns.

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i < j) // In this example, where the line number is smaller than the column number will be set as 1 
				Matrix[i][j] = 1;

			else if (i == j) // All the values in the main diagonal will be zero.
				Matrix[i][j] = 0;

			else // The remaining values will be -1
				Matrix[i][j] = -1;
		}
		
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if ((i < j) || (i == j))
				printf("  %d ", Matrix[i][j]);
			else
				printf(" %d ", Matrix[i][j]);
		}
		printf("\n");
	}
}